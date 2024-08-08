main_str = input("Please input the string 1:")
sub_str = input("Please input the string 2:")

count = 0

for i in range(len(main_str) - len(sub_str) + 1):
    if main_str[i:i+len(sub_str)] == sub_str:
        count += 1

if count > 0:
    print(f"String 2 is a substring of string 1")
    print(f"Repeat {count} times")
else:
    print(f"String 2 is not a substring of string 1")
