def roman(num):
    dic = {
        1000: "M",
        900: "CM",
        500: "D",
        400: "CD",
        100: "C",
        90: "XC",
        50: "L",
        40: "XL",
        10: "X",
        9: "IX",
        5: "V",
        4: "IV",
        1: "I"
    }
    
    roman_num = ''

    for value in dic:
        while num >= value:
            roman_num += dic[value]
            num -= value

    return roman_num

arabic_num = int(input("請輸入一個阿拉伯數字（1-3999）："))
print(f"羅馬數字表示法: {roman(arabic_num)}")
