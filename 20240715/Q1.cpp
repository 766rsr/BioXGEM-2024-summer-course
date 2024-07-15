#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            cout << left << j << "x" << i << "=" << setw(2) << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}
