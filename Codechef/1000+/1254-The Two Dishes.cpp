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
        if(a > b)cout << b <<endl;
        
        else cout << 2*a-b <<endl;

    }
    return 0;
}
