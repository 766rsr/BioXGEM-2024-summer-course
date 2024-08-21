#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 
    int N = rand() % 31 + 10; 
    int sum = 0, computer_move, player_move;

    cout << "N = " << N << endl;

    while (sum < N) {
        if ((N - sum - 1) % 4 == 0) {
            computer_move = rand() % 3 + 1; 
        } else {
            computer_move = (N - sum - 1) % 4;
        }

        sum += computer_move;
        cout << "Sum=" << sum << ", Computer add " << computer_move << endl;

        if (sum >= N) {
            cout << "Computer wins!" << endl;
            break;
        }

        cout << "Your turn, enter a number between 1 and 3: ";
        cin >> player_move;

        sum += player_move;
        cout << "Sum=" << sum << ", You add " << player_move << endl;

        if (sum >= N) {
            cout << "You lose!" << endl;
            break;
        }
    }

    return 0;
}