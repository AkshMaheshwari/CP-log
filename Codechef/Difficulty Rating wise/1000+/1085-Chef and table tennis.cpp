#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int cnt0=0,cnt1=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1')cnt1++;
            
            else cnt0++;
        }
        if(cnt1 > cnt0)cout << "WIN"<<endl;
        
        else cout << "LOSE"<<endl;
        
    }
    return 0;
}
