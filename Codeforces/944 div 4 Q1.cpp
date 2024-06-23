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
        int x,y;
        cin >> x >> y;
        if(x > y)cout << y << " " <<x <<endl;

        else cout << x << " " <<y<<endl;
    }

    return 0;
}