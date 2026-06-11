n = int(input())
for i in range(n):
    tmp = input()
    arr = []
    for ch in tmp:
        arr.append(int(ch))
    if sum(arr[:3:]) == sum(arr[3::]):
        print("You are lucky!")
    else:
        print("Wish you good luck.")