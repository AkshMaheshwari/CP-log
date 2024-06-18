#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        float s,a,b,c;
        cin >> s >> a >> b >> c;
        
        float _new = s+(c*s/100);
        if(_new >= a && _new <= b)cout << "Yes"<<endl;
        
        else cout << "No"<<endl;
    }
    return 0;
}
