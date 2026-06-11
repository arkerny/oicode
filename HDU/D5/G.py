n = int(input())
for k in range(n):
    a, b = map(float, input().split())
    std = round((a-100)*0.9*2,1)
    if abs(b-std) < std * 0.1:
        print("You are wan mei!")
    elif b>std:
        print("You are tai pang le!")
    else:
        print("You are tai shou le!")