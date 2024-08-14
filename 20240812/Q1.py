str1 = input("Please input string #1:")
str2 = input("Please input string #2:")

counts = [[0] * 26, [0] * 26]

for i, s in enumerate([str1, str2]):
    for char in s:
        if 'A' <= char <= 'Z':
            counts[i][ord(char) - ord('A')] += 1
        elif 'a' <= char <= 'z':
            counts[i][ord(char) - ord('a')] += 1

if counts[0] == counts[1]:
    print("Yes")
else:
    print("No")
