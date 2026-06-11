a,b = input().split()
a = float(a)
b = float(b)
bmi = a/(b**2)
print(int(round(bmi*10,0))/10)
if bmi > 25.0:
    print("PANG")
else:
    print("Hai Xing")