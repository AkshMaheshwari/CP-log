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
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int sum = 0;
        for(int i=1;i<n;i++)
        {
            sum=sum+abs(v[i-1]-v[i])-1;
        }
        cout << sum <<endl;
    }
    return 0;
}
