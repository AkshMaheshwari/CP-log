#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }
        int max = 0,current = 0;
        for(int i=0;i<n;i++)
        {
            current = 20 * a[i] - 10 * b[i];
            if(current > max)
            {
                max = current;
            }
            else if(current < 0)
            {
                current = 0;
            }
        }
        cout << max <<endl;
    }
    return 0;
}
