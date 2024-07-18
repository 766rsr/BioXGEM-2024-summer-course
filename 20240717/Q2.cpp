#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int temp;

    while (b != 0) {
        if(b > a){
            temp = b;
            b = a;
            a = temp;
        }else{
            a = a % b;
        }
    }

    return a;
}

int gcd_2(int a, int b){
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a ;
}

int main() {
    int x, y;
    cout << "Please enter two positive integers:";
    cin >> x >> y;

    cout << "The greatest common divisor is: " << gcd_2(x, y) << endl;

    return 0;
}
