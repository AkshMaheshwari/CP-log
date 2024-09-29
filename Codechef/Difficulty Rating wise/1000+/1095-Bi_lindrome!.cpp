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
        
        sort(s.begin(),s.end());
    
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == s[i+1])cnt++;
        }
        if(cnt)cout <<n-2<<endl;
        
        else cout <<-1<<endl;
        
    }
    return 0;
}
