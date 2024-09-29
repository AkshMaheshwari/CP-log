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
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }
        if(sum % 2 == 0)cout << "Yes"<<endl;
        
        else cout << "No"<<endl;
    }
    return 0;
}
