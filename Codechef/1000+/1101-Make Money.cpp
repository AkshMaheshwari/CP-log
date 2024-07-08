#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,val,coins;
        cin >> n >> val >> coins;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int sum=0,operations=0;
        for(int i=0;i<n;i++)
        {
            if(val-v[i] >= coins)
            {
                v[i] = val;
                operations++;
            }
        }
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
        }
        cout << sum-(coins*operations) <<endl;
    }
    return 0;
}
