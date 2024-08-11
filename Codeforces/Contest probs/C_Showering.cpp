#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        
        vector<int> l(n), r(n);
        for (int i = 0; i < n; i++) {
            cin >> l[i] >> r[i];
        }
        
        if (l[0] >= s) {
            cout << "YES" << endl;
            continue;
        }
        
        if (m - r[n-1] >= s) {
            cout << "YES" << endl;
            continue;
        }
        
        int max_gap = 0;
        for (int i = 0; i < n - 1; i++) {
            int gap = l[i + 1] - r[i];
            if (gap > max_gap) {
                max_gap = gap;
            }
        }
        
        if (max_gap >= s) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
