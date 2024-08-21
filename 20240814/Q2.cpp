#include <iostream>
#include <string>

using namespace std;

string roman(int num) {
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string syb[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    string roman_num = "";
    
    for (int i = 0; i < 13; i++) {
        while (num >= val[i]) {
            roman_num += syb[i];
            num -= val[i];
        }
    }
    
    return roman_num;
}

int main() {
    int arabic_num;
    
    cout << "請輸入一個阿拉伯數字（1-3999）：";
    cin >> arabic_num;

    cout << "羅馬數字表示法: " << roman(arabic_num) << endl;
    return 0;
}