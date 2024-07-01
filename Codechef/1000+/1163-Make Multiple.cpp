#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a==b)cout << "Yes"<<endl;
        
        else
        {
            if(b-a >= a)cout << "Yes"<<endl;
        
            else cout << "No"<<endl;
        }
    }
    return 0;
}
