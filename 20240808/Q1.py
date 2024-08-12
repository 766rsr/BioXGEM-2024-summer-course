low, high = input("Please input the LowerBound and the UpperBound: ").split()
low, high = int(low), int(high)

max_s = 0
max_n = low

for i in range(low, high + 1):
    sum = 0
    x = i
    
    while x != 1:
        sum += x
        if x % 2 == 0:
            x = x // 2
        else:
            x = 3 * x + 1
    
    sum += 1  
    
    if sum > max_s:
        max_s = sum
        max_n = i

print(f"N={max_n} Sum={max_s}")
