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
        int n,m;
        cin >> n >> m;
        if((n-m)%2==0 && n >= m)cout << "YES"<<endl;

        else cout << "NO" <<endl;


    }

    return 0;
}