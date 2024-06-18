#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        float u,v,a,s;
        cin >> u >> v >> a >> s;
        
        float check = u*u - 2 * a * s;
        
        if(check > v*v)cout << "No"<<endl;
        
        else cout << "Yes"<<endl;
    }
    return 0;
}
