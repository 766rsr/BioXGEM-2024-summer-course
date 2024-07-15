#include <iostream>
using namespace std;

int main() {
    int num, i, j;
    cout << "Please input a number: ";
    cin >> num;

    for (i = 0; i < num; i++) {
        for(j = 0; j < num-i-1; j++){
            cout << " ";
        }
        for (j = 0; j < i*2+1; j++) {
            cout << (i + 1) % 10;
        }
        cout << endl; 
    }

    return 0;
}
