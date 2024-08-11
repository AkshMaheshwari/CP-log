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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i] = n+1-v[i];
        }
        for(int i=0;i<n;i++)
        {
            cout << ans[i] <<" ";
        }
        cout <<endl;
    }

    return 0;
}