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
        if((a+b <=d && c <=e) ||(a+c <=d && b <=e)||(c+b <=d && a <=e))cout <<"Yes"<<endl;
        
        else cout<<"No"<<endl;
        
       
    }
    return 0;
}
