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
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        int sum =0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            cout << a[i] - sum/(n+1) <<" ";
        }
        cout <<endl;

    }
    return 0;
}
