#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please input the number of integers: ";
    cin >> n;

    int num, sum = 0;
    int max_value = 0; 
    int min_value = 99; 

    for (int i = 0; i < n; i++) {
        cout << "Integer #" << i + 1 << ": ";
        cin >> num;
        sum += num;
        if (num > max_value) {
            max_value = num;
        }
        if (num < min_value) {
            min_value = num;
        }
    }

    float average = float(sum) / n;

    cout << "The average is " << average << endl;
    cout << "The maximum is " << max_value << endl;
    cout << "The minimum is " << min_value << endl;

    return 0;
}
