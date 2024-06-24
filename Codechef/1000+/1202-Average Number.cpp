#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,v;
        cin >> n >> k >> v;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        int sum = accumulate(arr.begin(), arr.end(), 0);
        int total = v *(n+k);
        int deleted_sum = total-sum;
        
       
        if(deleted_sum % k ==0 && deleted_sum > 0)cout <<deleted_sum/k <<endl;
        
        else cout <<-1<<endl;
    }
    return 0;
}
       
