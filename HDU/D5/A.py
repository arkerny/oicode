a, b = input().split(maxsplit = 1)
flag = 0
if (not "." in a and not "." in b) and (not "-" in a and not "-" in b):
    try:
        a = int(a)
        if 1 <= a <= 1000:
            print(a, end = "")
        else:
            flag = 1
            print("?", end = "")
    except:
        flag = 1
        print("?", end = "")
    print(" + ", end = "")
    try:
        b = int(b)
        if 1 <= b <= 1000:
            print(b, end = "")
        else:
            flag = 1
            print("?", end = "")
    except:
        flag = 1
        print("?", end = "")
else:
    if "." in a or "-" in a:
        flag = 1
        print("?", end = "")
    else:
        print(a, end = "")
    print(" + ", end = "")
    if "." in b or "-" in b:
        flag = 1
        print("?", end = "")
    else:
        print(b, end = "")

if flag:
    print(" = ?")
else:
    print(" =",a+b)