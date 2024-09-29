#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        string r;
        cin >> s;
        cin >> r;
        int s0=0,r0=0,s1=0,r1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')s1++;
            
            if(s[i] == '0')s0++;
            
            if(r[i] == '1')r1++;
            
            if(r[i] == '0')r0++;
        }
        if(s1 == r1 && s0 == r0)cout << "YES"<<endl;
        
        else cout << "NO"<<endl;
    }
    return 0;
}
