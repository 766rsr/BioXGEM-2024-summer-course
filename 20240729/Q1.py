import random

num = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
ans = [0, 0, 0, 0]

# for i in range(10):
#     x = random.randint(0, 9)
#     temp = num[i]
#     num[i] = num[x]
#     num[x] = temp

random.shuffle(num)

print(f"{num[0]}{num[1]}{num[2]}{num[3]}")

n = 0
while True:
    a = 0
    b = 0
    n += 1
    
    temp = input("Please input four digits (0~9): ")
    
    for i in range(4):
        ans[i] = int(temp[i])
    
    for i in range(4):
        for j in range(4):
            if num[i] == ans[j]:
                if i == j:
                    a += 1
                else:
                    b += 1
    
    if a == 4:
        print(f"You got it in {n} attempts!!")
        break
    else:
        print(f"The result is {a}A {b}B")
