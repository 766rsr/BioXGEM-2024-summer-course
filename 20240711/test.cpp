#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    // 邏輯與
    if (x > 5 && y > 15) {
        cout << "Both conditions are true" << endl; // 此行將會輸出
    }

    // 邏輯或
    if (x > 15 || y > 15) {
        cout << "At least one condition is true" << endl; // 此行將會輸出
    }

    // 邏輯非
    if (!(x > 15)) {
        cout << "x is not greater than 15" << endl; // 此行將會輸出
    }

    return 0;
}