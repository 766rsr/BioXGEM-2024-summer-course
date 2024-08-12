#include <iostream>
using namespace std;

int main() {
    int low, high;
    
    cout << "Please input the LowerBound and the UpperBound: ";
    cin >> low >> high;

    int max_s = 0;
    int max_n = low;

    for (int i = low; i <= high; i++) {
        int sum = 0;
        int x = i;
        
        while (x != 1) {
            sum += x;
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                x = 3 * x + 1;
            }
        }
        
        sum += 1;  
        
        if (sum > max_s) {
            max_s = sum;
            max_n = i;
        }
    }

    cout << "N=" << max_n << " Sum=" << max_s << endl;

    return 0;
}
