import os
import json
from analyze_proto import helper
from analyze_proto import build_proto_dependency_graph


# repo_path = "/Users/zipeng/Projects/apollo/"


file_path = "/Users/zipeng/Downloads/protoc-3.11.2-osx-x86_64/bin/scenario.pb.cc"
#file_path = "/Users/zipeng/Downloads/protoc-3.11.2-osx-x86_64/bin/modules/prediction/proto/feature.pb.h"
cc_path = "/Users/zipeng/Projects/apollo/modules/prediction/predictor/single_lane/single_lane_predictor.cc"


def new_methods_parse_proto_ProtoBuf(protofile, repo_path):
    helper.compile_one_proto_files(protofile, repo_path)

    protofile = protofile[:-6]
    new_proto_h = protofile.replace(repo_path, 'output/new_generated_files/') + '.pb.h'
    new_proto_cc = protofile.replace(repo_path, 'output/new_generated_files/') + '.pb.cc'

    func_h = helper.function_declaration_in_file(os.getcwd()+"/"+new_proto_h)
    func_cc = helper.function_declaration_in_file(os.getcwd()+"/"+new_proto_cc)

    func_dec = func_h.union(func_cc)

    return {'proto': protofile, 'functions': list(func_dec)}


def proto_new_func_dic(repo_path):
    dic_list = []
    proto_files = helper.find_all_proto_files(repo_path)
    for f in proto_files:
        fdic = new_methods_parse_proto_ProtoBuf(f,repo_path)
        dic_list.append(fdic)
    with open('output/proto_new_functions_dic_list.graph', 'w') as wd:
        json.dump(list({v['proto']: v for v in dic_list}.values()),wd)
    wd.close()
    return dic_list


def category_functions_by_name(str):
    category = ""

    bre = str.rfind('::')
    if '::' not in str and '->' in str:
        bre = str.rfind('->')
    bre = bre if bre != -1 else -2
    str_name = str[bre + 2:]
    if "set_" in str or "add_" in str or "clear_" in str \
        or "_Parse" in str:
        category = "set"
    elif "IsInitialized" in str or "has_"in str or "_IsValid"in str or"HasExtension" in str  :
        category = "check"
    elif "_size" in str or "mutable_" in str or "release_" in str or "_MIN" in str or "_MAX" in str or"_descriptor" in str \
            or"_ARRAYSIZE"in str or "GetExtension" in str or "default_instance" in str\
            or "_Name" in str:
        category = "get"
    elif "SerializeToString" in str or "ParseFromString" in str or "ParseFromString" in str or "ParseFromIstream" in str:
        category = "paser_output"
    elif str_name.islower():
        category = "get"
    else:
        category = "others"
    return category



    # print("get:")
    # print(dic_file_proto_function.get('get_proto'))
    # print(len(dic_file_proto_function.get('get_proto')))
    # print(dic_file_proto_function.get('proto_get_method'))
    # print("set:")
    # print(len(dic_file_proto_function.get('set_proto')))
    # print(dic_file_proto_function.get('set_proto'))
    # print(dic_file_proto_function.get('proto_set_method'))
    # print("check:")
    # print(len(dic_file_proto_function.get('check_proto')))
    # print(dic_file_proto_function.get('check_proto'))
    # print(dic_file_proto_function.get('proto_check_method'))
    # print("others:")
    # print(dic_file_proto_function.get('others_proto'))
    # print(dic_file_proto_function.get('proto_other_method'))


