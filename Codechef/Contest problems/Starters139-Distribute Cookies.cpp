#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a > b)cout << a-b <<endl;
        
        else 
        {
            if(b % a > a/2)cout << a- (b %a) <<endl;
            
            else cout << b %a <<endl;
        }
    }
    return 0;
}
