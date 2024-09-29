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
        int n;
        cin >> n;
        vector<int>v(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin >> v[i];
        }
        int ans = -(accumulate(v.begin(),v.end(),0));
        cout << ans <<endl;
    }

    return 0;
}