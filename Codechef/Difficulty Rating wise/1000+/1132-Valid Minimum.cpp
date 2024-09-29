#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if((a==b && a<=c) || (b==c && a>=b)||(a==c && b >= c))cout <<"Yes"<<endl;
        
        else cout << "No"<<endl;
    }
    return 0;
}
