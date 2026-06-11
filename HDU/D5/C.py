a = input()
book = []
for i in a:
    t = int(i)
    if not t in book:
        book.append(t)
book.sort(reverse=True)
s = ""
for i in a:
    t = int(i)
    for j in range(len(book)):
        if t == book[j]:
            s = s + str(j)
print("int[] arr = new int[]{", end="")
flag = False
for i in book:
    if flag:
        print(",", end="")
    print(i,end="")
    flag = True
print("};\nint[] index = new int[]{", end="")
flag = False
for i in s:
    if flag:
        print(",", end="")
    print(i,end="")
    flag = True
print("};")