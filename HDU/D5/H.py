a, b =input().split()
c = input()
a = int(a)
if len(c)>a:
    print(c[len(c)-a::])
else:
    print(b * (a-len(c)) + c)