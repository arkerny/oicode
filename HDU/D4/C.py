n = int(input())
for k in range(n):
    poem = input()
    str1 = poem[:poem.find(","):]
    str2 = poem[poem.find(", ")+2:-1:]
    if str1[-3::]==str2[-3::]=="ong":
        arr = str2.split()
        arr[-3::] = ["qiao", "ben", "zhong"]
        str2 = ""
        for i in arr:
            str2+=i
            str2+=' '
        print(str1+", "+str2[:-1:]+".")
    else:
        print("Skipped")