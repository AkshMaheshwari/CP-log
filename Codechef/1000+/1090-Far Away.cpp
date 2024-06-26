#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            if(v[i]*2 <= k)b[i]=k;
            
            else b[i]=1;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=abs(v[i]-b[i]);
        }
        cout <<sum <<endl;
        
        
    
        
    }
    return 0;
}
