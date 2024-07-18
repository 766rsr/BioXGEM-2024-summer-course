#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;  
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0){
            return false;  
        }
    }

    return true; 
}

int main() {
    int num;
    cout << "Please enter a positive integer : ";
    cin >> num;

    if (isPrime(num)) {
        cout << "It is a prime number." << endl;
    } else {
        cout << "It is not a prime number." << endl;
    }

    return 0;
}
