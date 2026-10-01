t = int(input())

for i in range(t):
    inp = input()

    # print("Digits:", len(inp))
    for char in range(len(inp), 0, -1):
        print(inp[char - 1], end=" ")

    print()  
