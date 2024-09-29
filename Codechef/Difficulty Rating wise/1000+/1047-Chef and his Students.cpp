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
        int ans = 0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i-1] == '<' && s[i] == '>')ans++;
        }
        cout <<ans<<endl;
    }
    return 0;
}
