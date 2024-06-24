#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int>arr(n);
        int one=0,zero=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 1)one++;
            
            else zero++;
        }
        cout << min(one,zero) <<endl;
        
    }
    return 0;
}
