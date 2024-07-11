#include <iostream>
#include <iomanip> 
#include <string>
using namespace std;

int main() {
    string name;
    char department;
    int test1, test2;
    float average;

    cout << "Please input your name... ";
    cin >> name;
    cout << "Please select your department... (a:CS b:Bio c:Math) ";
    cin >> department;
    cout << "Please input your score on test 1... ";
    cin >> test1;
    cout << "Please input your score on test 2... ";
    cin >> test2;

    average = float(test1 + test2) / 2;

    cout << "+---------------------+----------+------+------+-------+" << endl;
    cout << "|        Name         |Department|Test 1|Test 2|Average|" << endl;
    cout << "+---------------------+----------+------+------+-------+" << endl;
    cout << "|" << left << setw(21) << name
         << "|" << right << setw(10) << department
         << "|" << setw(6) << test1
         << "|" << setw(6) << test2
         << "|" << fixed << setprecision(2) << setw(7) << average << "|" << endl;
    cout << "+---------------------+----------+------+------+-------+" << endl;

    return 0;
}


