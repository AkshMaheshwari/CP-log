#include <bits/stdc++.h>
#define int long long
#define am akshmaheshwari
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n;
        cin >>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(v[i] < 0)v[i] = abs(v[i]);
        }
        sort(v.begin(),v.end());
        cout << v[0] <<endl;
        
        
        
    

    return 0;
}