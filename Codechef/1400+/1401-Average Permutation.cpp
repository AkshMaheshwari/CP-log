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
        
        if(n % 2 == 0)
        {
            for(int i=n-1;i>=1;i-=2)
            {
                cout << i << " ";
            }
            for(int i=2;i<=n;i+=2)
            {
                cout << i << " ";
            }
            cout <<endl;
        }
        
        else
        {
            for(int i=n;i>=1;i-=2)
            {
                cout << i << " ";
            }
            for(int i=2;i<=n;i+=2)
            {
                cout << i << " ";
            }
            cout <<endl;
        }
    }
    return 0;
}
