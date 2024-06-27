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
        vector<int>a(n);
        vector<int>b(n+1);
        for(auto &x:a)cin >> x;
        for(auto &x:b)cin >>x;
        int sum = 0,extra=1e18;
        for (int i = 0; i < n; i++)
        {
            sum+=abs(a[i]-b[i]);
            extra = min(extra,abs(a[i]-b[n]));
            extra = min(extra,abs(b[i]-b[n]));
            if(min(a[i],b[i]) <= b[n] && b[n]<=max(a[i],b[i]))
            {
                extra = 0;
            }
        }
        cout << sum+ extra+1 <<endl;
        
        
        
    }

    return 0;
}