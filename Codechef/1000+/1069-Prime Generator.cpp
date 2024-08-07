#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isprime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            if (isprime(i)) cout << i << endl;
        }
        cout << " " << endl;
    }
    return 0;
}
