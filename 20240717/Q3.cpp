#include <iostream>
using namespace std;

int main() {
    int number;
    bool isFirst = true; 
    
    cout << "Please input a integer: ";
    cin >> number;

    cout << number << " = ";

    for (int i = 2; i <= number; i++) {
        while (number % i == 0) {  
            if (isFirst) {
                isFirst = false;  
            } else {
                cout << " * ";  
            }
            
            cout << i;  
            number /= i; 
        }
    }
    cout << endl;
    return 0;
}
