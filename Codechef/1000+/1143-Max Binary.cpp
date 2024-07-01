#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        if (s[0] == '0' && k > 0) {
            s[0] = '1';
            k--;
        }
        
       
        s += string(k, '0');
        
        cout << s << endl;
    }
    return 0;
}
