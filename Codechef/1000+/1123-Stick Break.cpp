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
        if(a % b ==0)cout << 0 <<endl;
        
        else cout << 1 <<endl;
    }
    return 0;
}
