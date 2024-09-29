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
        if(a >= b)cout << "PIZZA"<<endl;
        
        else if(a < b && a >= c)cout<<"BURGER"<<endl;
        
        else if(a < c && a < b)cout << "NOTHING"<<endl;
    }
    return 0;
}
  
