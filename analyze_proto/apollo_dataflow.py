from analyze_proto import build_proto_dependency_graph
from analyze_proto import helper
from analyze_proto import Decode_ProtocolBuffer_Cplusplus
import os
import json
import csv
from collections import defaultdict

repo_path = "/Users/zipeng/Projects/apollo/"
#repo_path = "/Users/zipeng/Projects/apollo/modules/prediction/predictor/single_lane/"

# scan cc file, check which proto it used, and which function it calls
def scan_cc_file(cfile, proto_func_dic):
    node = cfile.replace(repo_path,"")
    node = node.replace(helper.get_extension(node), "")
    dic_file_proto_function = {'file': node, 'proto': set(), 'get_proto':set(), 'set_proto': set(),'check_proto': set(),
                               'others_proto': set(), 'proto_get_method': set() , 'proto_set_method': set(),
                               'proto_check_method': set(),  'proto_other_method': set()}

    depend_protos = []
    file_proto_dic = build_proto_dependency_graph.get_all_dependencies_graph(repo_path)

    node = cfile.replace(helper.get_extension(cfile), '')
    node = node.replace(repo_path, '')
    for f_p_dic in file_proto_dic:
        if f_p_dic.get('node') == node:
            depend_protos = f_p_dic.get('protos')
    # print("depend_proto_size: %s" % len(depend_protos))
    depend_protos_names = [dp[dp.rfind('/')+1:] for dp in depend_protos]

    func_call = helper.function_calls_in_file(cfile)
    with open(cfile, 'r') as ccfile:
        lines = ccfile.readlines()

        for dic in proto_func_dic:
            if dic.get('proto').replace(repo_path, "") in depend_protos:
                pro = dic.get('proto').replace(repo_path, "")
                function_declared_in_proto = dic.get('functions')
                for f_dec in function_declared_in_proto:
                    bre = f_dec.rfind('::')
                    bre = bre if bre != -1 else -2
                    f_dec_name = f_dec[bre + 2:]
                    first = f_dec.find('::')
                    first = first if first != -1 else len(f_dec)
                    f_proto_name = f_dec[:first]

                    for f_call in func_call:
                        if f_dec_name+"(" in f_call:  # waring: this may lead to False Positive.
                            # MostLikelyProtos = []
                            # if f_call[ :f_call.find(f_dec_name)] != "" :
                            #     if "->" in f_call and "(" not in f_call[:f_call.find("->")]:
                            #         MostLikelyProtos.append(f_call[:f_call.find("->")])
                            #     if "." in f_call and "(" not in f_call[:f_call.find(".")]:
                            #         MostLikelyProtos.append(f_call[:f_call.find(".")])
                            #     if "::" in f_call:
                            #         MostLikelyProtos.append(f_call[:f_call.find("::")])
                            #
                            #     MostLikelyProtos.append(f_call[:f_call.find(f_dec_name)])

                            for line in lines:
                               if f_proto_name in line : #and helper.check_Strs_in_string(MostLikelyProtos,f_proto_name):
                                # the file call functions in proto. now seperate to getter and setter.
                                dic_file_proto_function.get('proto').add(dic.get('proto').replace(repo_path, ""))

                                if Decode_ProtocolBuffer_Cplusplus.category_functions_by_name(f_dec_name) == "get":
                                    dic_file_proto_function.get('get_proto').add(
                                        dic.get('proto').replace(repo_path, ""))
                                    dic_file_proto_function.get('proto_get_method').add(f_dec)
                                elif Decode_ProtocolBuffer_Cplusplus.category_functions_by_name(f_dec_name) == "set":
                                    dic_file_proto_function.get('set_proto').add(
                                        dic.get('proto').replace(repo_path, ""))
                                    dic_file_proto_function.get('proto_set_method').add(f_dec)
                                elif Decode_ProtocolBuffer_Cplusplus.category_functions_by_name(f_dec_name) == "check":
                                    dic_file_proto_function.get('check_proto').add(
                                        dic.get('proto').replace(repo_path, ""))
                                    dic_file_proto_function.get('proto_check_method').add(f_dec)
                                elif 'Clear' not in f_call and 'CopyFrom' not in f_call:
                                    dic_file_proto_function.get('others_proto').add(
                                        dic.get('proto').replace(repo_path, ""))
                                    dic_file_proto_function.get('proto_other_method').add(f_dec)
    return dic_file_proto_function


def scan_apollo_project():
    valid_extension = ['.cc', '.c', '.cpp', '.hpp', '.h']
    cc_files = helper.find_all_files(repo_path, valid_extension, recursive=True)
    apollo_dataflow_dic_list = []
    if os.path.exists(os.getcwd()+'/output/proto_new_functions_dic_list.graph'):
         proto_function_dic = build_proto_dependency_graph.get_graph_from_file('output/proto_new_functions_dic_list.graph')
    else:
         proto_function_dic = Decode_ProtocolBuffer_Cplusplus.proto_new_func_dic(repo_path)

    with open('output/apollo_dataflow.csv', 'w') as wf:
        fw = csv.writer(wf)
        fw.writerow(['FileName','FileCategory','GetProto','No.get','SetProto','No.set','CheckProto','No.check','OthersProto','No.others'])
        for cfile in cc_files:
            node = cfile.replace(repo_path, "")
            node = node.replace(helper.get_extension(node), "")
            listkey = list()
            for v in apollo_dataflow_dic_list:
                listkey.append(v.get('file'))
            cfile_scan_result = scan_cc_file(cfile, proto_function_dic)
            if node not in listkey:
                dic_file_proto_funciton = cfile_scan_result
            else:
                # combine .h and .cc
                for v in apollo_dataflow_dic_list:
                    if v.get('file') == node:
                        dic_file_proto_funciton = v
                        #dic_file_proto_function = {'file': node, 'proto': set(), 'get_proto':set(), 'set_proto': set(),'check_proto': set(),
                        #   'others_proto': set(), 'proto_get_method': set() , 'proto_set_method': set(),
                        #    'proto_check_method': set(),  'proto_other_method': set()}
                        dic_file_proto_funciton['proto']= dic_file_proto_funciton.get('proto').union(cfile_scan_result.get('proto'))
                        dic_file_proto_funciton['get_proto'] = dic_file_proto_funciton.get('get_proto').union(cfile_scan_result.get('get_proto'))
                        dic_file_proto_funciton['set_proto']=dic_file_proto_funciton.get('set_proto').union(cfile_scan_result.get('set_proto'))
                        dic_file_proto_funciton['check_proto']=dic_file_proto_funciton.get('check_proto').union(cfile_scan_result.get('check_proto'))
                        dic_file_proto_funciton['others_proto']=dic_file_proto_funciton.get('others_proto').union(cfile_scan_result.get('others_proto'))
                        dic_file_proto_funciton['proto_get_method'] = dic_file_proto_funciton.get('proto_get_method').union(cfile_scan_result.get('proto_get_method'))
                        dic_file_proto_funciton['proto_set_method'] = dic_file_proto_funciton.get('proto_set_method').union(cfile_scan_result.get('proto_set_method'))
                        dic_file_proto_funciton['proto_check_method'] = dic_file_proto_funciton.get('proto_check_method').union(cfile_scan_result.get('proto_check_method'))
                        dic_file_proto_funciton['proto_other_method'] = dic_file_proto_funciton.get('proto_other_method').union(cfile_scan_result.get('proto_other_method'))

            apollo_dataflow_dic_list.append(dic_file_proto_funciton)
            fw.writerow([cfile.replace(repo_path, ""), helper.categorize(helper.get_packagename(cfile, repo_path)),
                         dic_file_proto_funciton.get('get_proto'),len(dic_file_proto_funciton.get('get_proto')),
                         dic_file_proto_funciton.get('set_proto'), len(dic_file_proto_funciton.get('set_proto')),
                         dic_file_proto_funciton.get('check_proto'),len(dic_file_proto_funciton.get('check_proto')),
                         dic_file_proto_funciton.get('others_proto'),len(dic_file_proto_funciton.get('others_proto'))])
    wf.close()
    return apollo_dataflow_dic_list


def output_scan_apollo_project(apollo_dataflow_dic_list):
    # apollo_dataflow_dic_list = scan_apollo_project()
    with open('output/apollo_file_proto_dataflow.graph', 'w') as fp:
        json.dump(list({v['file']: v for v in apollo_dataflow_dic_list}.values()), fp, cls=helper.SetEncoder)
    fp.close()

def get_scan_apollo_project():
    if os.path.exists(os.getcwd() + '/output/apollo_file_proto_dataflow.graph'):
        apollo_dataflow_dic_list = build_proto_dependency_graph.get_graph_from_file(
            'output/apollo_file_proto_dataflow.graph')
    else:
        apollo_dataflow_dic_list = scan_apollo_project()
        output_scan_apollo_project(apollo_dataflow_dic_list)
    return apollo_dataflow_dic_list


def file_proto_file_relation():
    valid_extension = ['.cc', '.c', '.cpp', '.hpp', '.h']
    # file - protos dependency
    # graph_list = build_proto_dependency_graph.get_all_dependencies_graph(repo_path)

    # file - protos detail relationship, include: file get which proto, set which proto
    apollo_dataflow_dic_list = get_scan_apollo_project()

    # proto - files dependency
    # pf_dic = build_proto_dependency_graph.proto_file_relation()

    all_files = helper.find_all_files(repo_path, valid_extension)

    return_list = []

    for file in all_files:
        filename = file.replace(repo_path, "")
        filename = filename.replace(helper.get_extension(filename),"")

        """check which proto(s) this file is using"""
        get_protos = []
        for dic in apollo_dataflow_dic_list:
            if filename == dic.get('file'):
                get_protos = list(dic.get('get_proto'))+ list(dic.get('check_proto'))
                break
        """ check which file(s) set these proto """
        proto_setfile_diclist = []
        if len(get_protos) > 0:
            for get_p in get_protos:
                  files_set_gp = set()
                  for dic in apollo_dataflow_dic_list:
                      if get_p in dic.get('set_proto'):
                          files_set_gp.add(dic.get('file'))
                  proto_filedetail_dic = {'proto': get_p, 'files_set_proto': files_set_gp}
                  proto_setfile_diclist.append(proto_filedetail_dic)

        dataflow_file = {'file': filename, 'list_proto_setfile': proto_setfile_diclist}

        return_list.append(dataflow_file)

    return return_list


def output_file_proto_file_relation(proto_setfile_diclist):
    #proto_setfile_diclist = file_proto_file_relation()
    with open('output/file_proto_file.graph', 'w') as fpf:
        json.dump(list({v['file']: v for v in proto_setfile_diclist}.values()), fpf, cls=helper.SetEncoder)
       # json.dump(proto_setfile_diclist,fpf, cls=helper.SetEncoder)
    fpf.close()


def print_file_proto_file_relation_to_csvfile(proto_setfile_diclist):
    #proto_setfile_diclist = file_proto_file_relation()
    with open('output/file_proto_file.csv', 'w') as file_proto_file:
        fw = csv.writer(file_proto_file)
        fw.writerow(['File', 'FileCategory', 'GetProto','ProtoCategory' ,'FileSetProto','SetFileCategory'])

        for dic in proto_setfile_diclist:
            file = dic.get('file')
            list_proto_setfile_dic = dic.get('list_proto_setfile')
            for p_s_d in list_proto_setfile_dic:
                proto = p_s_d.get('proto')
                fs_proto = p_s_d.get('files_set_proto')
                # if len(fs_proto) > 0:
                for f in fs_proto:
                    fw.writerow([file, helper.categorize(helper.get_packagename(file, repo_path)),
                                 proto, helper.categorize(helper.get_packagename(proto,repo_path)),
                                 f, helper.categorize(helper.get_packagename(f, repo_path))])
    file_proto_file.close()


def graph_file_proto_file_relation(proto_setfile_diclist):
    graph = helper.graph()
    for dic in proto_setfile_diclist:
        file = dic.get('file')
        graph.addVertex(file)
        list_proto_setfile_dic = dic.get('list_proto_setfile')
        # files = set()
        for p_s_d in list_proto_setfile_dic:
            # proto = p_s_d.get('proto')
            fs_proto = p_s_d.get('files_set_proto')
            for f in fs_proto:
                graph.addVertex(f)
                graph.AddEdge((f, file))

    with open('output/file_file_graph.graph','w') as f:
        json.dump(graph.gdict, f)
    f.close()
    return graph


def get_file_proto_file_relation():
    if os.path.exists(os.getcwd() + '/output/file_proto_file.graph'):
        file_proto = build_proto_dependency_graph.get_graph_from_file(
            'output/file_proto_file.graph')
    else:
        file_proto = file_proto_file_relation()
    return file_proto


if __name__=="__main__":
    # if os.path.exists(os.getcwd()+'/output/proto_new_functions_dic_list'):
    #      proto_function_dic = build_proto_dependency_graph.get_graph_from_file('output/proto_new_functions_dic_list')
    # else:
    #      proto_function_dic = proto_new_func_dic(repo_path)
    # dic_file_proto_function = scan_cc_file(cc_path, proto_function_dic)
    # scan_apollo_project()

     file_proto_file_relation = get_file_proto_file_relation()
     output_file_proto_file_relation(file_proto_file_relation)


     graph_file_proto_file_relation(file_proto_file_relation)


     print_file_proto_file_relation_to_csvfile(file_proto_file_relation)



