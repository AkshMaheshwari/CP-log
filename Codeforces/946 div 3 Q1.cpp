#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int nt;
    cin >> nt;
    cin.ignore(); // Ignore newline after reading nt

    for (int t = 0; t < nt; ++t) {
        string line;
        getline(cin, line);
        istringstream iss(line);

        int x, y;
        iss >> x >> y;

        int mm = (y + 1) / 2;
        x -= (mm * 5 * 3 - y * 2 * 2);
        x = max(x, 0);
        mm += (x + 5 * 3 - 1) / (5 * 3);

        cout << mm << endl;
    }

    return 0;
}
