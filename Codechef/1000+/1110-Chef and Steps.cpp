#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        string ans = "";
        for(int i=0;i<n;i++)
        {
            if(arr[i] % k ==0)
            {
                ans+='1';
            }
            else 
            {
                ans+='0';
            }
        }
        cout << ans <<endl;
    }
    return 0;
}
