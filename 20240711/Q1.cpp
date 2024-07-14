#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number;
    cout << "Please input a positive integer: ";
    cin >> number;

    if (number <= 0) {
        cout << number << " is not a positive integer!!" << endl;
        
    } else if (number >= 1 && number <= 9) {
        cout << number << " is a small integer." << endl;
        
    } else if (number >= 10 && number <= 99) {
        cout << "The tens digit of " << number << " is " << number / 10 << endl;
        cout << "The units digit of " << number << " is " << number % 10 << endl;

    } else if (number >= 100) {
        cout << number << " is a large integer." << endl;

        if (number % 5 == 0) {
            cout << number << " is divisible by 5." << endl;
        } else if (number % 5 == 1) {
            cout << number << "+5=" << number + 5 << endl;
        } else if (number % 5 == 2) {
            cout << number << "-5=" << number - 5 << endl;
        } else if (number % 5 == 3) {
            cout << number << "*5=" << number * 5 << endl;
        } else if (number % 5 == 4) {
            cout << fixed << setprecision(2);
            cout << number << "/5=" << number / 5.0 << endl;
        }
    }
    return 0;
}
