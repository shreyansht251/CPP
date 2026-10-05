#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> cards(n);

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int left = 0;
    int right = n - 1;

    int sereja = 0;
    int dima = 0;

    for (int turn = 0; turn < n; turn++) {

        int card;

        // Choose the larger card from left or right
        if (cards[left] > cards[right]) {
            card = cards[left];
            left++;
        }
        else {
            card = cards[right];
            right--;
        }

        // Sereja's turn
        if (turn % 2 == 0) {
            sereja += card;
        }
        // Dima's turn
        else {
            dima += card;
        }
    }

    cout << sereja << " " << dima << endl;

    return 0;
}