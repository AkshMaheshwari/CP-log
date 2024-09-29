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
        
        for(int i=n;i>=1;i--)
        {
            if(i % 2 == 0)cout <<i/2 << " ";
            
            else cout <<n-i/2<<" ";
        }
        cout << endl;
    }
    return 0;
}
