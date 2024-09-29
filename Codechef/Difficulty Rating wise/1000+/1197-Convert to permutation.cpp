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
        int flag = 1;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int sum = 0;

        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i] > i+1)
            {
                flag = 0;
                break;
            }
            else
            {
                sum+=i+1-v[i];
            }
        }
        if(flag)cout << sum <<endl;
        
        else cout << -1 <<endl;
    }
    return 0;
}
