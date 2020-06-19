import os
import re
import json
from collections import defaultdict
from analyze_proto import helper
import csv

include_regex = re.compile('#include\s+["<"](.*)[">]')
import_regex = re.compile('import\s+["](.*)["]')
valid_extensions = ['.c', '.cc', '.cpp', '.h', '.hpp', '.proto']
repo_path = "/Users/zipeng/Projects/apollo/"


def find_neighbors_with_path(path):
    """ Find all the other nodes included by the file targeted by path. """
    try:
        f = open(path)
        code = f.read()
        return [include.replace(helper.get_extension(include), '') for include in include_regex.findall(code)]
    except:
        print('error open file')
        return []
    # print(include_regex.findall(code))


def find_imports_for_proto(path):
    f = open(path)
    code = f.read()
    return [include.replace(helper.get_extension(include), '') for include in import_regex.findall(code)]


# def find_neighbors_proto(path):
#     """ Find all proto files included by the file targeted by path. """
#     """ in the returned list, remove suffix for each proto file ( i.e. remove .proto/.pb.h/.pb.cc)"""
#     neighbors = []
#     try:
#         f = open(path)
#         code = f.read()
#         includes = include_regex.findall(code)
#         for include in includes:
#             if helper.get_extension(include) == '.pb.h' or helper.get_extension(include)=='.pb.cc' or helper.get_extension(include) == ".proto":
#                 include = include.replace(helper.get_extension(include), '')
#                 neighbors.append(include)
#         return neighbors
#     except:
#         print('error open file')
#         return []


def create_graph_with_path(defaultfolder, proto_names):
    """ Create a graph from a folder. """
    # Find nodes and clusters
    # common = '/Users/zipeng/Projects/apollo/'
    files = helper.find_all_files(defaultfolder,valid_extensions=valid_extensions)
    folder_to_files = defaultdict(list)
    for path in files:
        folder_to_files[os.path.dirname(path)].append(path)

    nodes = {path.replace(helper.get_extension(path), '') for path in files}
    nodes = {node.replace(defaultfolder,'') for node in nodes}

    # Create graph(dictionaries)
    list_dictionaries = []

    # Find edges and create clusters
    for folder in folder_to_files:
        for path in folder_to_files[folder]:
            node = path
            node = node.replace(helper.get_extension(path), '')
            node = node.replace(defaultfolder, '')

            diction = {}
            keys = list()
            for v in list_dictionaries:
                keys.append(v.get('node'))
                if node == v.get('node'):
                    diction = v
                    break
            if node not in keys:
                diction = {'node': node, 'dependencies': [], 'protos':[]}
            neighbors = find_neighbors_with_path(path) + find_imports_for_proto(path)
            # print(neighbors)
            for neighbor in neighbors:
                if neighbor != node and neighbor in nodes:
                    diction.get('dependencies').append(neighbor)
                    if neighbor in proto_names:
                        diction.get('protos').append(neighbor)
            list_dictionaries.append(diction)
    with open('output/proto_direct_parse.graph', 'w') as output:
        json.dump(list({v['node']: v for v in list_dictionaries}.values()), output)
    return list_dictionaries


def get_graph_from_file(file):
    with open(file) as f:
        graph = json.load(f)
    return graph


# def proto_graph(graph):
#     for dic in graph:
#         dependencies = dic.get('dependencies')
#         for item in dependencies:
#             if item.endwith('.pb.h') :
#                 item = item.replace('.pb.h', '.proto')
#             elif item.endwith('.pb.cc'):
#                 item = item.replace('.pb.cc', '.proto')
#         dic['dependencies']=dependencies
#     return graph


def parse_graph(graph, protos):
    key_list = []
    for dic in graph:
        key_list.append(dic.get('node'))
    for dic in graph:
        dependencies = dic.get('dependencies')
        tmp_set = []
        for each in dependencies:
            tmp_set.append(each)
        new_dependencies=[]
        new_protos=[]
        while len(tmp_set) > 0:
            item = tmp_set.pop()
            if item not in new_dependencies:
                new_dependencies.append(item)
                if item in protos and item not in new_protos:
                    new_protos.append(item)
            else:
                continue
            if item in key_list:
                for d in graph:
                    if d.get('node') == item:
                        for dp in d.get('dependencies'):
                            tmp_set.append(dp)

        dic.update({'node': dic.get('node'), 'dependencies': new_dependencies, 'protos':new_protos})
    with open('output/proto_direct_indirect_parse.graph', 'w') as output:
        json.dump(graph, output)
    output.close()
    return graph


def search_in_graph(graph, search_string):
    node_list = []
    for dic in graph:
        if search_string in dic.get('dependencies'):
            node_list.append(dic.get('node'))
    return node_list


def get_direct_dependencies_graph(path):
    if os.path.exists('output/proto_direct_parse.graph'):
        graph = get_graph_from_file('output/proto_direct_parse.graph')
    else:
        protos = helper.find_all_proto_files(repo_path)
        proto_names = {proto.replace(repo_path, '') for proto in protos}
        proto_names = {proto.replace(helper.get_extension(proto), '') for proto in proto_names}
        graph = create_graph_with_path(path, proto_names)
    return graph


def get_all_dependencies_graph(path):
    if os.path.exists('output/proto_direct_indirect_parse.graph'):
        graph = get_graph_from_file('output/proto_direct_indirect_parse.graph')
    else:
        protos = helper.find_all_proto_files(repo_path)
        proto_names = {proto.replace(repo_path, '') for proto in protos}
        proto_names = {proto.replace(helper.get_extension(proto), '') for proto in proto_names}
        depend_graph = get_direct_dependencies_graph(path)
        graph = parse_graph(depend_graph, proto_names)
    return graph


def proto_file_relation():
    pf_dic = defaultdict(list)
    graph_list = get_all_dependencies_graph(repo_path)
    # pf_dic_keys = pf_dic.keys()
    for dic in graph_list:
        for p in dic.get('protos'): # [p:files]
            if dic.get('node') not in pf_dic[p]:
                pf_dic[p].append(dic.get('node'))
    return pf_dic


def output_proto_file_relation():
    pf_dic = proto_file_relation()
    with open("proto_file.csv", 'w') as pf:
        writer = csv.writer(pf)
        writer.writerow(["proto_name", "proto_category", "RelatedFile", "file_category"])
        for key in pf_dic:
            package = helper.get_packagename(key, repo_path)
            proto_category = helper.categorize(package)
            related_files = pf_dic[key]
            for f in related_files:
                category_f = helper.categorize(f)
                writer.writerow([key, proto_category, f, category_f])
    pf.close()
    return pf_dic


def output_protos_to_csvfile():
    with open('protolist.csv', 'w') as protofile:
        pw = csv.writer(protofile)
    for proto in protos:
        package = helper.get_packagename(proto, repo_path)
        category = helper.categorize(package)
        pw.writerow([proto, package, category])
    protofile.close()


if __name__ == '__main__':
    protos = helper.find_all_proto_files(repo_path)
    proto_names = {proto.replace(repo_path, '') for proto in protos}
    proto_names = {proto.replace(helper.get_extension(proto), '') for proto in proto_names}

    #li = get_all_dependencies_graph(repo_path, proto_names)
    #pf_dic = proto_file_relation(get_direct_dependencies_graph(repo_path,proto_names))
    pf_dic = proto_file_relation(get_all_dependencies_graph(repo_path,proto_names))










