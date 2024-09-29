#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        if(b-a < c *e || b-a > d * e)cout << 0 <<endl;
        
        else cout << 1 << endl;
    }
    return 0;
}
