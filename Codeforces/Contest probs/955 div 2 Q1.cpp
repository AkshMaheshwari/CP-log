#include <bits/stdc++.h>
#define int long long // Use consistent 64-bit integer type
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        if ((x1 > y1 && x2 > y2) || (y1 > x1 && y2 > x2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
