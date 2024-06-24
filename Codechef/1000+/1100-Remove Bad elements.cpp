#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int count=1;
        int max = 1;
        
        int n;
        cin >>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int max_count = 1, res = arr[0], curr_count = 1; 
        for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else
            curr_count = 1; 
        
        if (curr_count > max_count) { 
            max_count = curr_count; 
            res = arr[i - 1]; 
        } 
        
    } 

    cout << n - max_count<<endl;
    }
    return 0;
}
