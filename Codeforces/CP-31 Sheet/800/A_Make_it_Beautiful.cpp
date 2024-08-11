#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (a[0] == a[n - 1]) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << a[n - 1] << " ";
            for (int i = 0; i < n - 1; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
