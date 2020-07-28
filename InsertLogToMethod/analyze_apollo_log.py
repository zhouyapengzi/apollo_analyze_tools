import os
import json
from json import dumps, loads, JSONEncoder, JSONDecoder

def get_files(directory):
    file_paths = []
    file_names = []
    for root, directories, files in os.walk(directory):
        for file in files:
            # f_path = os.path.join(root, file)
            # file_paths.append(f_path)
            if file.endswith('.cc') or file.endswith('.cpp'):
                file_names.append(file)
    # print("total number of files: %s" % len(file_paths))
    # return file_paths
    return file_names


def analyze_log(log, files):
    methods = set()
    methods_in_destination = set()
    hit_file = set()
    total_file = set()
    count = 0
    with open(log, 'r') as logfile:
        for line in logfile:
            count = count + 1
            print("log line:%s" % count)
            if 'I0522' not in line and 'W0522' not in line and 'E0522' not in line:
                continue
            # print(line)
            line = ' '.join(line.split())
            line_split = line.split(" ", 4)
            # # get file name from one log line
            if len(line_split) < 4:
                file_line = line_split[-1]
            else:
                file_line = line_split[3]
            file_name = file_line.split(':')[0]

            total_file.add(file_name)
            if file_name in files:
                hit_file.add(file_name)

            if len(line_split) <= 4:
                continue
            logw = line_split[4]
            # # get method name from one log line
            if "DMCZP" in line:
                log_split = logw.split(':')
                method_name = log_split[-1]
                methods.add(method_name)
                if file_name in files:
                    methods_in_destination.add(method_name)

    logfile.close()
    return methods, methods_in_destination, hit_file, total_file


class SetEncoder(JSONEncoder):
    def default(self, obj):
        if isinstance(obj, set):
            return list(obj)
            return json.JSONEncoder.default(self, obj)


def write_to_file(output, obj):
    with open(output, 'a+') as fpf:
        json.dump(obj, fpf, cls=SetEncoder)
    fpf.close()


if __name__ == "__main__":
    perception_path = "/home/pz/debug_apollo/modules/perception"
    prediction_path = "/home/pz/debug_apollo/modules/prediction"
    perception_files = get_files(perception_path)
    prediction_files = get_files(prediction_path)
    print(len(prediction_files))
    print(len(perception_files))

    log = "/home/pz/debug_apollo/data/log/sorted"
    total_hit_methods, percept_hit_method, percept_hit_file, percept_total_file = analyze_log(log, perception_files)
    total_hit_methods, predict_hit_method, predict_hit_file, predict_total_file = analyze_log(log, prediction_files)

    print('perception_hit_method: %s' % len(percept_hit_method))
    print('prediction_hit_method: %s' % len(predict_hit_method))
    print('total_hit_method: %s' % len(total_hit_methods))
    print("..........................")
    print('percept hit file %s' % len(percept_hit_file))
    print('predict hit file %s' % len(predict_hit_file))
    print('percept total hit file %s' % len(percept_total_file))
    print('percept total hit file %s' % len(predict_total_file))

    print('writing to file.......')
    write_to_file('percept.txt', percept_hit_method)
    write_to_file('prediction.txt', predict_hit_method)
    write_to_file('all_hit_method.txt', total_hit_methods)