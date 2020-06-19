import os
import sre_compile
from json import dumps, loads, JSONEncoder, JSONDecoder
import pickle
from base64 import b64encode, b64decode
import re

def normalize(path):
    """ Return the name of the node that will represent the file at path. """
    filename = os.path.basename(path)
    #print(filename)
    end = filename.rfind('.')
    end = end if end != -1 else len(filename)
    return filename[:end]


def get_extension(path):
    """ Return the extension of the file targeted by path. """
    if ".pb.h" in path or ".pb.cc" in path:
        end = path[:path.rfind('.')].rfind('.')
    else:
        end = path.rfind('.')
    end = end if end != -1 else len(path)
    return path[end:]



def find_all_files(path, valid_extensions, recursive=True):
    """
    Return a list of all the files in the folder.
    If recursive is True, the function will search recursively.
    """
    files = []
    for entry in os.scandir(path):
        if entry.is_dir() and recursive:
            files += find_all_files(entry.path, valid_extensions)
        elif get_extension(entry.path) in valid_extensions:
            # add parse for .proto
            #if get_extension(entry.path) == ".proto":
            #    files.append(entry.path.replace(".proto", ".pb.h"))
            #finish add parse for .proto
            #else:
            files.append(entry.path)
    return files


def find_all_proto_files(path):
    proto_files = []
    for root, directories, files in os.walk(path):
        for file in files:
            if file.endswith('.proto'):
                file_path = os.path.join(root, file)
                proto_files.append(file_path)
    print("Total proto files: %s" % len(proto_files))
    return proto_files


def categorize(packagename):
    category = ""
    if "cyber" in packagename:
        category += "/cyber"
    if "/prediction" in packagename:
        category = category + "/prediction"
        if "container" in packagename:
            category += "/container"
        if "scenario" in packagename:
            category += "/scenario"
        if "evaluator" in packagename:
            category += "/evaluator"
        if "predictor" in packagename:
            category += "/predictor"

    if "/perception" in packagename:
        category = category + "/perception"
        if "camera" in packagename:
            category += "/camera"
            if "traffic_light" in packagename:
                category += "/traffic_light"
            if "lane" in packagename:
                category +="/lane"
            if "obstacle" in packagename:
                category +="/obstacle"
        if "lidar" in packagename:
            category += "/lidar"
        if "fusion" in packagename:
            category += "/fusion"
        if "radar" in packagename:
            category +="/radar"
    if "common" in packagename:
        category += "/common"
    if "planning" in packagename:
        category += "/planning"
    if "/localization" in packagename:
        category += "/localization"
    if "/control" in packagename:
        category += "/control"
    if "/canbus" in packagename:
        category +="/canbus"
    if "/routing" in packagename:
        category += "/routing"
    if "/transform" in packagename:
        category += "/transform"
    if "/monitor" in packagename:
        category +="/monitor"
    if "/third_party_perception" in packagename:
        category +="/third_party_perception"
    if "/drivers" in packagename:
        category += "/drivers"
    if "/routing" in packagename:
        category += "/routing"
    if "/map" in packagename:
        category += "/map"
    if "/tools" in packagename:
        category +="/tools"
    if "/bridge" in packagename:
        category += "/bridge"
    if "/dreamview" in packagename:
        category += "/dreamview"
    if "/v2x" in packagename:
        category += "/v2x"
    return category


def get_packagename(file_path, repo_path):
    update_filename = file_path.replace(repo_path, '')
    index = update_filename.rfind('/')
    index = index if index != -1 else update_filename
    package_name = update_filename[:index]
    return package_name


# compile .proto file, generate .pb.h and .pb.cc
# /Users/zipeng/Projects/protoc-3.11.2-osx-x86_64/bin/protoc -I=/Users/zipeng/Projects/apollo \
# --cpp_out=/output/new_files /Users/zipeng/Projects/apollo/modules/prediction/proto/scenario.proto
def compile_one_proto_files(proto_file, project_path):
    protoc_dir = "/Users/zipeng/Projects/protoc-3.11.2-osx-x86_64/bin/protoc"
    indir = "-I="+project_path
    outdir = "--cpp_out=output/new_generated_files"
    command = protoc_dir + " " + indir + " " + outdir + " "  + proto_file
    os.system(command)


def compile_protos(project_path):
    proto_files = find_all_proto_files()
    for f in proto_files:
        compile_one_proto_files(f, project_path)
    return True


def get_filename_from_path(path):
    start = path.rfind("/")
    end = path.rfind(".")
    end = end if end != -1 else path
    return path[start+1:end]


_regexp_compile_cache = {}
def match(pattern, s):
    """Matches the string with the pattern, caching the compiled regexp."""
    # The regexp compilation caching is inlined in both Match and Search for
    # performance reasons; factoring it out into a separate function turns out
    # to be noticeably expensive.
    if pattern not in _regexp_compile_cache:
        _regexp_compile_cache[pattern] = sre_compile.compile(pattern)
    return _regexp_compile_cache[pattern].match(s)


_regexp_compile_cache = {}
def search(pattern, s):
    """Searches the string for the pattern, caching the compiled regexp."""
    if pattern not in _regexp_compile_cache:
        _regexp_compile_cache[pattern] = sre_compile.compile(pattern)
    return _regexp_compile_cache[pattern].search(s)


# find functions generated by ProtoBuff for each proto file
# check .pb.h + .pb.cc is enough
def function_declaration_in_file(cfile):
    regexp = r'(\w(\w|::|\*|\&|\s)*)\('  # decls * & space::name( ...

    fun_list = set()
    with open(cfile) as f:
        lines = f.readlines()
    for line in lines:
        match_result = match(regexp, line)
        if match_result:
            # If the name is all caps and underscores, figure it's a macro and
            # ignore it, unless it's TEST or TEST_F.
            function_name = match_result.group(1).split()[-1]
            if '_internal' not in function_name.lower():
                fun_list.add(function_name)
    return fun_list


# scan cc file, check which function it calls
def function_calls_in_file(cfile):
    call_functions = set()
    with open(cfile) as f:
        lines = f.readlines()
    for line in lines:
        groups = line.split()
        for g in groups:
            fncall = g  # if there's no control flow construct, look at whole line
            if (  # Ignore control structures.
                    not search(r'\b(if|for|while|switch|new|delete|catch)\b', fncall) and
                    # Ignore pointers/references to functions.
                    not search(r' \([^)]+\)\([^)]*(\)|,$)', fncall) and
                    # Ignore pointers/references to arrays.
                    not search(r' \([^)]+\)\[[^\]]+\]', fncall)):
                search_result = search(r'\w\s*\(.*\)', fncall)
                if search_result:
                    call_functions.add(search_result.string)
    return call_functions




class PythonObjectEncoder(JSONEncoder):
    def default(self, obj):
        if isinstance(obj, (list, dict, str, int, float, bool, type(None))):
            return super().default(obj)
        return {'_python_object': b64encode(pickle.dumps(obj)).decode('utf-8')}

    def as_python_object(dct):
        if '_python_object' in dct:
            return pickle.loads(b64decode(dct['_python_object'].encode('utf-8')))
        return dct


class SetEncoder(JSONEncoder):
    def default(self, obj):
       if isinstance(obj, set):
          return list(obj)
          return json.JSONEncoder.default(self, obj)


class graph:
    def __init__(self, gdict=None):
        if gdict is None:
            gdict = {}
        self.gdict = gdict

    def edges(self):
        return self.findedges()

# Get the keys of the dictionary
    def getVertices(self):
        return list(self.gdict.keys())

# Add the vertex as a key
    def addVertex(self, vrtx):
       if vrtx not in self.gdict:
            self.gdict[vrtx] = []

# Add the new edge
    def AddEdge(self, edge):
        # edge = set(edge)
        if len(edge) == 0:
            return self.gdict
        vrtx1 = edge[0]
        vrtx2 = edge[1]
        # (vrtx1, vrtx2) = tuple(edge)
        if vrtx1 in self.gdict:
            self.gdict[vrtx1].append(vrtx2)
        else:
            self.gdict[vrtx1] = [vrtx2]

# List the edge names
    def findedges(self):
        edgename = []
        for vrtx in self.gdict:
            for nxtvrtx in self.gdict[vrtx]:
                if (vrtx, nxtvrtx) not in edgename:
                    edgename.append((vrtx, nxtvrtx))
        return edgename

    def find_all_paths(self, start, end, path=[]):
        path = path + [start]
        if start == end:
            return [path]
        if start not in self.gdict.keys():
            return []
        paths = []
        for node in self.gdict[start]:
            if node not in path:
                newpaths = self.find_all_paths(node, end, path)
                for newpath in newpaths:
                    paths.append(newpath)
        return paths

    def find_path(self, start, end, path=[]):
        path = path + [start]
        if start == end:
            return path
        if start not in self.gdict.keys():
            return None
        for node in self.gdict[start]:
            if node not in path:
                newpath = self.find_path(node, end, path)
                if newpath: return newpath
        return None


def check_Strs_in_string(usedinfile, f_proto_name):
    if len(usedinfile)==0:
        return True
    lp = []
    for pu in usedinfile:
        if "(" in pu:
            pu.replace("(","")
        if ")" in pu:
            pu.replace(")","")

    for pu in usedinfile:
        pu_ = pu.lower()
        if "_" in pu:
            newpus = pu.split("_")
            lp = lp + newpus
        lp.append(pu)

    usedinfile = lp + usedinfile


    ns = mutabe_str(f_proto_name)
    for s in ns:
        for uf in usedinfile:
            if uf == s:
                return True
    return False


def mutabe_str(str2):
    # turn AaaBbb to Aaa, Bbb;
    breakatUpperCase = '[A-Z][^A-Z]*'
    strs = re.findall(breakatUpperCase, str2)


    # turn AaaBbb to Aaa_Bbb
    if len(strs) > 1:
        new_str_1 = ""
        for st in strs:
            new_str_1 = new_str_1 + st + "_"
        strs.append(new_str_1)
        strs.append(new_str_1[:-1])


    strs.append(str2)
    strs.append(str2+"_")

    #todo: AaaBbb -> Aaa_Bbb_param

    # to lower case
    strs_low = []
    for s in strs:
        sl = s.lower()
        strs_low.append(sl)
    strs = strs + strs_low

    # turn AaaBbb to AaaBbb* or $AaaBbb
    newstrs_star = []
    newstrs_address = []
    for st in strs:
        newst_star = st + "*"
        n_address = "&" + st
        newstrs_star.append(newst_star)
        newstrs_address.append(n_address)
    strs = strs + newstrs_star + newstrs_address
    return strs


