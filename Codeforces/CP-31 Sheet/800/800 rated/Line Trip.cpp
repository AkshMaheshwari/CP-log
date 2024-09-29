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
        int n,x;
        cin >> n >> x;
        vector <int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int last =0;
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans = max(ans,v[i]-last);
            last =v[i];
        }
        ans = max(ans,2*(x-last));
        cout << ans << endl;
    }

    return 0;
}