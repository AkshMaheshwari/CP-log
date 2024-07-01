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
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        //for multi kill
        int min_nulti = arr[n-1];
        //for single kill
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] % k == 0)sum+=arr[i]/k;
            
            else sum+=1+arr[i]/k;
        }
        cout << min(min_nulti,sum)<<endl;
    }
    return 0;
}
