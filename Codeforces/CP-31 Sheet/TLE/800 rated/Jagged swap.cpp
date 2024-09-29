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
        vector <int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        
        if(v[0] !=1)cout << "NO"<<endl;

        else cout <<"YES"<<endl;
        
    }

    return 0;
}