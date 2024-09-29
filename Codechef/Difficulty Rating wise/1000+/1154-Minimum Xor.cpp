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
        int result=0;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            result ^= v[i];
        }
        int min_xor = result;
        for(int i=0;i<n;i++)
        {
            int xor_removal =result^v[i];
            min_xor = min(min_xor,xor_removal);
            
        }
        cout << min_xor <<endl;
    }
    return 0;
}
