str1 = input()

book = []
for i in range(1,1001):
    book.append("6"*i)

book = book[::-1]

for i in book:
    if (i in str1):
        if 9 >= len(i) > 3:
            str1 = str1.replace(i,"9")
        elif len(i) > 9:
            str1 = str1.replace(i,"27")

print(str1)