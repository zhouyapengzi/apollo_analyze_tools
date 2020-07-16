import os
import git
import github
from github import Github
import time
from github import RateLimitExceededException
import calendar
import csv

# token to access github.
TOKEN = ['5229ae024634ae878efc8833775cb7e26d0b1b0c']
g = Github(TOKEN[0])

repo_path = '/Users/zipeng/Projects/debug_apollo/'#"/Users/zipeng/Projects/apollo"
keywords = [' fix', ' defect', ' error', ' bug', 'issue', 'mistake', 'incorrect',' fault', ' flaw']

model_related_file = ['modules/perception/onboard/component/trafficlights_perception_component.cc',
'modules/perception/camera/app/traffic_light_camera_perception.cc',
'modules/perception/camera/lib/traffic_light/detector/detection/detection.cc',
'modules/perception/camera/lib/traffic_light/detector/detection/select.cc',
'modules/perception/camera/lib/traffic_light/detector/recognition/recognition.cc ',
'modules/perception/camera/lib/traffic_light/detector/recognition/classify.cc',
'modules/perception/camera/lib/traffic_light/tracker/semantic_decision.cc',
'modules/perception/onboard/component/segmentation_component.cc',
'modules/perception/camera/app/lane_camera_perception.cc',
'modules/perception/camera/app/cipv_camera.cc',
'modules/perception/camera/lib/lane/detector/darkSCNN/darkSCNN_lane_detector.cc ',
'modules/perception/camera/lib/lane/detector/denseline/denseline_lane_detector.cc',
'modules/perception/camera/lib/lane/postprocessor/darkSCNN/darkSCNN_lane_postprocessor.cc' ,
'modules/perception/camera/lib/lane/postprocessor/denseline/denseline_lane_postprocessor.cc',
'modules/perception/camera/app/obstacle_camera_perception.cc',
'modules/perception/camera/lib/obstacle/detector/yolo/yolo_obstacle_detector.cc',
'modules/perception/camera/lib/obstacle/detector/yolo/region_output.cu',
'modules/perception/camera/lib/obstacle/postprocessor/location_refiner/location_refiner_obstacle_postprocessor.cc',
'modules/perception/camera/lib/obstacle/postprocessor/location_refiner/obj_postprocessor.cc',
'modules/perception/camera/lib/obstacle/tracker/omt/obstacle_reference.cc',
'modules/perception/camera/lib/obstacle/tracker/omt/omt_obstacle_tracker.cc',
'modules/perception/camera/lib/obstacle/tracker/omt/track_object.cc',
'modules/perception/camera/lib/obstacle/transformer/multicue/multicue_obstacle_transformer.cc',
'modules/perception/camera/lib/obstacle/transformer/multicue/obj_mapper.cc',
'modules/perception/onboard/component/recognition_component.cc',
'modules/perception/onboard/component/lidar_output_component.cc',
'modules/perception/lidar/lib/pointcloud_preprocessor/pointcloud_preprocessor.cc',
'modules/perception/lidar/app/lidar_obstacle_segmentation.cc',
'modules/perception/lidar/lib/segmentation/cnnseg/cnn_segmentation.cc',
'modules/perception/lidar/lib/segmentation/cnnseg/feature_generator.cc',
'modules/perception/lidar/lib/segmentation/ncut/ncut_segmentation.cc',
'modules/perception/lidar/lib/segmentation/ncut/ncut.cc',
'modules/perception/lidar/app/lidar_obstacle_tracking.cc',
'modules/perception/lidar/lib/tracker/association/distance_collection.cc',
'modules/perception/lidar/lib/tracker/association/gnn_bipartite_graph_matcher.cc',
'modules/perception/lidar/lib/tracker/association/multi_hm_bipartite_graph_matcher.cc',
'modules/perception/lidar/lib/tracker/measurement/measurement_collection.cc',
'modules/perception/lidar/lib/tracker/multi_lidar_fusion',
'modules/perception/onboard/component/fusion_component.cc',
'modules/perception/fusion/app/obstacle_multi_sensor_fusion.cc',
'modules/perception/fusion/lib/data_association',
'modules/perception/fusion/lib/data_fusion',
'modules/perception/fusion/lib/fusion_system',
'modules/perception/fusion/lib/gatekeeper',
'modules/perception/onboard/component/fusion_camera_detection_component.cc',
'modules/perception/inference',
'modules/prediction/evaluator/evaluator_manager.cc',
'modules/prediction/evaluator/pedestrian/pedestrian_interaction_evaluator.cc',
'modules/prediction/evaluator/vehicle/cruise_mlp_evaluator.cc',
'modules/prediction/evaluator/vehicle/junction_map_evaluator.cc',
'modules/prediction/evaluator/vehicle/junction_mlp_evaluator.cc',
'modules/prediction/evaluator/vehicle/lane_aggregating_evaluator.cc',
'modules/prediction/evaluator/vehicle/lane_scanning_evaluator.cc',
'modules/prediction/evaluator/vehicle/mlp_evaluator.cc',
'modules/prediction/evaluator/vehicle/semantic_lstm_evaluator.cc']


# return all files' path in a directory(including sub-dir)
def get_file_path(directory):
    file_paths = []
    for root, directories, files in os.walk(directory):
        for file in files:
            path = os.path.join(root, file)
            file_paths.append(path)
    return file_paths


# find how many time a file is modified by command 'git log -- file_path'
def get_file_change_times(repo, filename):
    count = 0
    log = repo.git.log('--', filename)
    for line in log.splitlines():
        # print(line)
        if line.find('commit ') != -1:
            count = count + 1
    return count


def search_keyword(message, keywords):
    for k in keywords:
        if k in message:
            return True
    return False


# quick search in commit messages
def search_commit_messages(repo, filename):
    log = repo.git.log('--', filename)
    commit_messages = []
    for line in log.splitlines():
        if line.startswith(' '): # this line is commit message.
            contain_keyword = search_keyword(line, keywords)
            if contain_keyword:
                commit_messages.append(line)
    return commit_messages


def search_pull_request(filename, valid_pulls):
    pull_requests = []
    pull_iter = iter(valid_pulls)
    while True:
        try:
            pull = next(pull_iter)
            if search_keyword(pull.title, keywords):
                commits = pull.get_commits()
                commit_iter = iter(commits)
                while True:
                    try:
                        commit = next(commit_iter)
                        if filename in commit.files:
                            pull_requests.append(pull.url)
                            break
                    except StopIteration:
                        break  # loop end
                    except RateLimitExceededException:
                        exception_deal()
                        continue
        except StopIteration:
            break  # loop end
        except github.RateLimitExceededException:
            exception_deal()
            continue
    return pull_requests


def pull_request(pulls, repo):
    file_pull_commit_dic=[]
    with open('commit.csv','w') as f:
        with open('pull.csv','w') as pf:
            writerc = csv.writer(f)
            writerp = csv.writer(pf)
            valid_pulls = []
            pull_iter = iter(pulls)
            while True:
                try:
                    pull = next(pull_iter)
                    if search_keyword(pull.title, keywords):
                        writerp.writerow([pull.title, pull.url])
                        valid_pulls.append(pull)

                    commits = pull.get_commits()
                    commit_iter = iter(commits)
                    while True:
                        try:
                            commit = next(commit_iter)
                            if search_keyword(commit.commit.message, keywords):
                                writerc.writerow([commit.commit.message, commit.url])
                                for filename in model_related_file:
                                    file_dic = {'File': filename, 'pulls': [], 'commits': []}
                                    if filename in commit.files:
                                        file_dic['pulls'].append(pull.url)
                                        file_dic['commits'].append(commit)
                                        file_pull_commit_dic.append(file_dic)
                                        break

                        except StopIteration:
                            break  # loop end
                        except RateLimitExceededException:
                            exception_deal()
                            continue

                except StopIteration:
                    break  # loop end
                except github.RateLimitExceededException:
                    exception_deal()
                    continue
        pf.close()
    f.close()

    return valid_pulls, file_pull_commit_dic


def main(sheetwriter, pulls):
    repo = git.Repo(repo_path)
    # file_path = get_file_path(repo_path)

    sheetwriter.writerow(['filename', 'change_count', 'commits_related', 'pull_requests_related', 'pull_requests'])
    valid_pulls,file_pull_commit_dic = pull_request(pulls, repo)

    for filename in model_related_file:
        print(filename)
        full_filename = '/Users/zipeng/Projects/debug_apollo/' + filename
        # print(filename)
        count = get_file_change_times(repo, full_filename)
        # sheet.write(row, 0, filename)
        # sheet.write(row, 1, count)

        commits = []
        # search_commit_messages(repo, full_filename)
        # pull_requests = search_pull_request(filename=filename, valid_pulls=valid_pulls)
        pull_requests=[]
        for fc in file_pull_commit_dic:
            if fc['file'] == filename:
                pull_requests.append(fc['pulls'])
                commits.append(fc['commits'])
        sheetwriter.writerow([filename, str(count), str(len(commits)), str(len(pull_requests)),  pull_requests])


def exception_deal():
    reset_timestamp = calendar.timegm(g.get_rate_limit().core.reset.timetuple())
    # add 10 seconds to be sure the rate limit has been reset
    sleep_time = reset_timestamp - calendar.timegm(time.gmtime()) + 600
    time.sleep(sleep_time)


if __name__ == "__main__":
    rl = g.get_rate_limit()

    r = g.get_repo(full_name_or_id=96246170)
    crawl_pull_requests = r.get_pulls('all')

    with open('model_related.csv', 'w') as f:
        writer = csv.writer(f)
        main(writer, crawl_pull_requests)
    f.close()




