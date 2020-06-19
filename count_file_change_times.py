import os
import git
from xlwt import Workbook

repo_path = "/Users/zipeng/Projects/apollo"


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


'''def main(sheet):
    repo = git.Repo(repo_path)
    file_path = get_file_path(repo_path)
    row = 0
    for filename in file_path:
        print(filename)
        count = get_file_change_times(repo, filename)
        sheet.write(row, 0, filename)
        sheet.write(row, 1, count)
        row = row + 1

if __name__ == "__main__":
    wb = Workbook()
    sheet1 = wb.add_sheet('sheet1')
    main(sheet1)
    wb.save('file_change_times.xls')'''
