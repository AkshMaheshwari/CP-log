#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {   int a,b;
        cin >> a >> b;
        
        int ca=0,cb=0,sa=0,sb=0;
        for(int i =1;i<=a;i+=2)
        {
            sa+=i;
            if(sa <= a)ca++;
        }
        for(int j =2;j<=b;j+=2)
        {
            sb+=j;
            if(sb <=b)cb++;
        }
        if(ca > cb)cout <<"Limak"<<endl;
        
        else cout << "Bob"<<endl;
        
    }
    return 0;
}
