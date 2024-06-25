#include <bits/stdc++.h>
#define int long long
#define am akshmaheshwari
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int x1,x2,x3;
        cin >> x1 >> x2 >> x3;
        int a = abs(x1-x2)+abs(x1-x3);
        int b = abs(x2-x1)+abs(x2-x3);
        int c = abs(x3-x1)+abs(x3-x2);
        int ans = min(min(a, b), c);
        cout << ans <<endl;
    }

    return 0;
}