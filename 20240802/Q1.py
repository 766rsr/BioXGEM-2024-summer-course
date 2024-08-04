# 定義英文字母對應的數值
letters = {
    'A': 10, 'B': 11, 'C': 12, 'D': 13, 'E': 14, 'F': 15,
    'G': 16, 'H': 17, 'J': 18, 'K': 19, 'L': 20, 'M': 21,
    'N': 22, 'P': 23, 'Q': 24, 'R': 25, 'S': 26, 'T': 27,
    'U': 28, 'V': 29, 'X': 30, 'Y': 31, 'W': 32, 'Z': 33,
    'I': 34, 'O': 35
}

# 輸入身分證字號
id = input("請輸入身分證字號：")

# 取出身分證字號的第一碼及其對應數值
first_letter = id[0]

first_value = letters[first_letter]
A1 = first_value // 10
A2 = first_value % 10

# 取出其餘九碼數字
digits = []
for i in range(1, 10):
    digits.append(int(id[i]))

# 計算 Y 的值
Y = A1 + A2*9 + digits[0]*8 + digits[1]*7 + digits[2]*6 + digits[3]*5 + digits[4]*4 + digits[5]*3 + digits[6]*2 + digits[7]*1

# 計算檢查碼
check_digit = (10 - (Y % 10)) % 10

# 驗證檢查碼是否正確
if check_digit == digits[8]:
    print("身分證字號正確!!")
else:
    print("身分證字號錯誤!!")