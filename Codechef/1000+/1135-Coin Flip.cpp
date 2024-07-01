#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int g;
        cin >> g;
        while(g--)
        {
            int a,b,c;
            cin >> a >> b >> c;
            if(b % 2==0)cout <<b/2<<endl;
            
            else
            {
                if(a==c)cout <<b/2<<endl;
                
                else cout <<1+b/2<<endl;
            }
        }
    }
    return 0;
}
