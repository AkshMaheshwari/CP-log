#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,s;
        cin >> n >> x >> s;
        int a,b;

        for(int i=1;i<=s;i++)
        {
            cin >> a >> b;
            if(b == x)x=a;
            
            else if(a == x)x = b;
        }
        cout << x <<endl;
        
    }
    return 0;
}
