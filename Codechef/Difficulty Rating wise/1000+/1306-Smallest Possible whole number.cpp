#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        
        if(b == 0)cout << a << endl;
        
        else cout << a % b << endl;
        
    }
    return 0;
}
