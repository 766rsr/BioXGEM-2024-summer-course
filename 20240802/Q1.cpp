#include <iostream>
#include <string>
using namespace std;

int main() {
    // 定義字母對應的數值陣列
    int letterValues[26] = {10, 11, 12, 13, 14, 15, 16, 17, 34, 18, 19, 20, 21, 22, 35, 23, 24, 25, 26, 27, 28, 29, 32, 30, 31, 33};

    string id;
    cout << "請輸入身分證字號：";
    cin >> id;

    // 取出身分證字號的第一碼及其對應數值
    char first_letter = id[0];
    int index = first_letter - 'A';
    int first_value = letterValues[index];

    int A1 = first_value / 10;
    int A2 = first_value % 10;

    // 取出其餘九碼數字
    int digits[9];
    for (int i = 1; i < 10; ++i) {
        digits[i - 1] = id[i] - '0';
    }

    // 計算 Y 的值
    int Y = A1 + A2 * 9 + digits[0] * 8 + digits[1] * 7 + digits[2] * 6 + digits[3] * 5 + digits[4] * 4 + digits[5] * 3 + digits[6] * 2 + digits[7] * 1;

    // 計算檢查碼
    int check_digit = (10 - (Y % 10)) % 10;

    // 驗證檢查碼是否正確
    if (check_digit == digits[8]) {
        cout << "身分證字號正確!!" << endl;
    } else {
        cout << "身分證字號錯誤!!" << endl;
    }

    return 0;
}
