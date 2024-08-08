#include <iostream>
#include <string>

using namespace std;

int main() {
    string main_str;
    string sub_str;

    cout << "Please input the string 1: ";
    getline(cin, main_str);
    cout << "Please input the string 2: ";
    getline(cin, sub_str);

    int count = 0;

    for (int i = 0; i <= main_str.length() - sub_str.length(); i++) {
        if (main_str[i] == sub_str[0]) { 
            bool match = true;
            for (int j = 0; j < sub_str.length(); j++) {
                if (main_str[i + j] != sub_str[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                count++;
            }
        }
    }

    if (count > 0) {
        cout << "String 2 is a substring of string 1" << endl;
        cout << "Repeat " << count << " times" << endl;
    } else {
        cout << "String 2 is not a substring of string 1" << endl;
    }

    return 0;
}
