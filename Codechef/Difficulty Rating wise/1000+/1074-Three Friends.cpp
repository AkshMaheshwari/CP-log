#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        if(max({x,y,z}) == x+y+z-max({x,y,z}))cout << "yes"<<endl;
        
        else cout << "no"<<endl;
    }
    return 0;
}
