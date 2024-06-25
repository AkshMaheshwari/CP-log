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
        cin >> s;
        int c0=0;
        int c1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0')c0++;
            
            else c1++;
        }
        if(c1 > c0)cout <<c0+1<<endl;
        
        else if(c0 > c1)cout<<c1 <<endl;
        
        else cout <<c0 <<endl;
    }
    return 0;
}
