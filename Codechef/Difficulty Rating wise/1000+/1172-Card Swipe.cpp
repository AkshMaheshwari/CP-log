#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        unordered_map<int,int>mp;
        int ans = 0;
        int mx = 0;
        for(int i=0;i<n;i++)
        {
            if(mp[v[i]] == 0)
            {
                mp[v[i]]++;
                ans++;
            }
            else
            {
                mp[v[i]]--;
                ans--;
            }
            mx = max(mx,ans);
        }
        cout << mx<<endl;
    }
    return 0;
}
