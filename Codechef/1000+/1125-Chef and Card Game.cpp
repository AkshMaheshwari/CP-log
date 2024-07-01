#include <bits/stdc++.h>
#define int long long
using namespace std;

// Function to calculate the digit sum of a number
int digit_sum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a, b;
        int p1 = 0, p2 = 0;
        while (n--) {
            cin >> a >> b;
            int sumA = digit_sum(a);
            int sumB = digit_sum(b);

            if (sumA > sumB) {
                p1++;
            } else if (sumA < sumB) {
                p2++;
            } else {
                p1++;
                p2++;
            }
        }

        if (p1 > p2) {
            cout << 0 << " " << p1 << endl;
        } else if (p2 > p1) {
            cout << 1 << " " << p2 << endl;
        } else {
            cout << 2 << " " << p1 << endl;
        }
    }
    return 0;
}
