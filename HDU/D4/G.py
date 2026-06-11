STD = [[129, 25], [130, 27]]
n = int(input())
for i in range(n):
    tmp = list(map(int,input().split()))
    if tmp[1] < STD[tmp[0]][0]:
        print("duo chi yu!", end = "")
    if tmp[1] > STD[tmp[0]][0]:
        print("ni li hai!", end = "")
    if tmp[1] == STD[tmp[0]][0]:
        print("wan mei!", end = "")
    if tmp[2] < STD[tmp[0]][1]:
        print(" duo chi rou!")
    if tmp[2] > STD[tmp[0]][1]:
        print(" shao chi rou!")
    if tmp[2] == STD[tmp[0]][1]:
        print(" wan mei!")