#include<bits/stdc++.h>
using namespace std;

int count_suneet_wins(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;
    vector<int> suneet_cards = {a1, a2};
    vector<int> slavic_cards = {b1, b2};
    vector<int> suneet_permutations = {0, 1};
    vector<int> slavic_permutations = {0, 1};

    do {
        do {
            int suneet_rounds_won = 0;
            int slavic_rounds_won = 0;

            if (suneet_cards[suneet_permutations[0]] > slavic_cards[slavic_permutations[0]])
                suneet_rounds_won++;
            else if (suneet_cards[suneet_permutations[0]] < slavic_cards[slavic_permutations[0]])
                slavic_rounds_won++;

            if (suneet_cards[suneet_permutations[1]] > slavic_cards[slavic_permutations[1]])
                suneet_rounds_won++;
            else if (suneet_cards[suneet_permutations[1]] < slavic_cards[slavic_permutations[1]])
                slavic_rounds_won++;

            if (suneet_rounds_won > slavic_rounds_won)
                suneet_wins++;

        } while (next_permutation(slavic_permutations.begin(), slavic_permutations.end()));

    } while (next_permutation(suneet_permutations.begin(), suneet_permutations.end()));

    return suneet_wins;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << count_suneet_wins(a1, a2, b1, b2) << endl;
    }
    return 0;
}
