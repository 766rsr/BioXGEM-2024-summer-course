#include <iostream>
#include <string>
using namespace std;

int main() {
	int i, j;
    string str[2];

    cout << "Please input string #1: ";
    getline(cin, str[0]);
    cout << "Please input string #2: ";
    getline(cin, str[1]);

    int counts[2][26] = {{0}};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < str[i].length(); j++) {
            char c = str[i][j];

            if ('A' <= c && c <= 'Z') {
                counts[i][c - 'A'] ++;
            } else if ('a' <= c && c <= 'z') {
                counts[i][c - 'a'] ++;
            }
        }
    }

    for (i = 0; i < 26; i++) {
        if (counts[0][i] != counts[1][i]) {
            break;
        }
    }

    if (i == 26) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
