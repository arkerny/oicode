import os
import time

print("Please Input Commit Message (Input time to Get Now Time) :")
Commit_Message = input()
if Commit_Message == "time":
    Commit_Message = time.strftime("%a %b %d %H:%M %Y", time.localtime())

os.system("git add .")
os.system("git commit -m " + '"' + Commit_Message + '"')
os.system("git push all master")