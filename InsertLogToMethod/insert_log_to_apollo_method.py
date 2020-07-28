import os
import sre_compile
import re

hello = "/Users/zipeng/Downloads/tmp/namespace.cc";
test = "/Users/zipeng/Downloads/tmp/";
path = "/Users/zipeng/Projects/debug_apollo/modules/perception"
#"/Users/zipeng/Projects/apollo-5.0/modules/prediction"
#
#


_regexp_compile_cache = {}
def match(pattern, s):
    """Matches the string with the pattern, caching the compiled regexp."""
    # The regexp compilation caching is inlined in both Match and Search for
    # performance reasons; factoring it out into a separate function turns out
    # to be noticeably expensive.
    if pattern not in _regexp_compile_cache:
        _regexp_compile_cache[pattern] = sre_compile.compile(pattern)
    return _regexp_compile_cache[pattern].match(s)


include_regex = re.compile('#include\s+["<"](.*)[">]')
def insert_logs_includes(cfile):
    """ Find all the other nodes included by the file targeted by path. """
    f = open(cfile)
    lines = open(cfile, 'r').readlines()
    content = open(cfile, 'r').readlines()
    code = f.read()
    f.close
    neighbors = include_regex.findall(code)
    cyber_log="cyber/common/log.h"
    if cyber_log not in neighbors and not ("ADEBUG" in content or "AINFO" in content or "AERROR" in content):
        # firstinclude = neighbors[0]
        #for line in lines:
        #    if line.find(firstinclude):
        #        print(lines.index(line))       
        content.insert(0, "#include \"cyber/common/log.h\"\n")
        #        break
        with open(cfile, 'w') as f:
            f.writelines(content)
        f.close  


def find_cc_file(path):   
    cc_files = []
    for root, directories, files in os.walk(path):
        for file in files:
            if file.endswith('.cc') or file.endswith('.cpp'):
                file_path = os.path.join(root, file)
                cc_files.append(file_path)
    print("Total cc files: %s" % len(cc_files))
    return cc_files


def insert_at_the_beginning_and_end_of_method(cfile):
    regexp = r'(\w(\w|::|\*|\&|\s)*)\('  # decls * & space::name( ...    
    fun_list = set()
    
    lines = open(cfile, 'r').readlines()
    content = open(cfile, 'r').readlines()


    # insertline = 0
    with open(cfile, 'w') as f:
        # place_to_insertlog = []
        for line in lines:           
            match_result = match(regexp, line)
            index = 0
            insert_at_the_end = False
            if match_result:
                # if "void " in match_result:
                #     insert_at_the_end = True
                # find a method
                first_bracket_line = 0
                first_bracket_column = 0
                last_bracket_column = 0
                last_bracket_line = 0
                return_line = 0

                function_name = match_result.group(1).split()[-1]
                out_log_message = "\n   AINFO<<\"(DMCZP) LeaveMethod: " + function_name + "\";\n "
                in_log_message = "\n    AINFO<<\"(DMCZP) EnteringMethod: " + function_name + "\";\n"


                # find the first "{" and record it.
                # find the last "{" and record it 
                index = lines.index(line)
                sublist = lines[index:]

                brackets_count = 0;
                first_bracket = 0
                line_num = 0
                has_return = False
                for li in sublist:
                    if first_bracket == 1:
                        line_num = line_num + 1

                    if "{" in li :
                        brackets_count = brackets_count + 1
                        if first_bracket == 0:
                            first_bracket = 1
                            first_bracket_line = sublist.index(li) + index
                            first_bracket_column = li.index("{")
                            # print("first_bracket at line: %s, column %s"% (first_bracket_line, first_bracket_column) )

                    # ****** insert leaveing method log before return something.****** ####
                    if "//" not in li and "ADEBUG" not in li:
                        if "return " in li or "return;" in li:
                            has_return = True
                            out_return_log_message = "\n  AINFO<<\"(DMCZP) (return) LeaveMethod: " + function_name + "\";\n  "
                            return_line = first_bracket_line + line_num
                            return_column = li.index("return")
                            content[return_line] = content[return_line][:return_column] + out_return_log_message + \
                                                   content[return_line][return_column:]



                    if "}" in li:
                        brackets_count = brackets_count - 1
                        # find the last brackets of a method
                        if brackets_count == 0:
                             last_bracket_line = index + sublist.index(li)
                             last_bracket_column = li.index("}")
                            #  print("last_bracket at line: %s, column %s" % (last_bracket_line, last_bracket_column))


                             if last_bracket_line == first_bracket_line:
                                 # ******  insert entering log at the end of each method.#
                                 content[last_bracket_line] = content[last_bracket_line][:first_bracket_column + 1] + in_log_message + \
                                                                content[last_bracket_line][
                                                                first_bracket_column + 1 : last_bracket_column] + \
                                                              content[last_bracket_line][last_bracket_column:]

                                 # ******  insert leaveing log at the end of each method.#
                                 if insert_at_the_end:
                                     content[last_bracket_line] = content[last_bracket_line][:first_bracket_column + 1] + in_log_message + \
                                                                                                 content[last_bracket_line][
                                                                                                 first_bracket_column + 1 : last_bracket_column] + out_log_message + \
                                                                                               content[last_bracket_line][last_bracket_column:]

                             else:
                                 # ****** insert entering log at the beginning of each method.
                                 content[first_bracket_line] = content[first_bracket_line][ :first_bracket_column + 1] + in_log_message + content[first_bracket_line][first_bracket_column + 1:]

                                 # ****** insert outof method message if no return
                                 if insert_at_the_end:
                                     if not has_return or return_line + 1 != last_bracket_line or return_line != last_bracket_line:
                                         if last_bracket_column == 0:
                                             content[last_bracket_line] = out_log_message + content[last_bracket_line]
                                         else:
                                             content[last_bracket_line] = content[last_bracket_line][
                                                                      :last_bracket_column] + out_log_message + \
                                                                      content[last_bracket_line][last_bracket_column:]
                             break

                fun_list.add(function_name)
  
        f.writelines(content)
        f.close       
    return fun_list






if __name__=="__main__":
    files = find_cc_file(path)
    num_methods = 0
    perception_functions = set()
    for file in files:
        if "test" in file:
            continue
        fun = []
        #insert_logs_includes(file)
        fun = insert_at_the_beginning_and_end_of_method(file)
    #     # print(len(fun))
        num_methods = num_methods + len(fun)
        perception_functions.add()
    print(num_methods)
    '''
    insert_at_the_beginning_and_end_of_method(hello)
    '''
