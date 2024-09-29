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
        int flag = 1;
        if(n % 2 ==0)
        {
            for(int i=1;i<n;i+=2)
            {
                if(s[i-1]!=s[i])
                {
                flag = 0;
                break;
                }
            }
        if(flag)cout << "YES"<<endl;
            
        else cout << "NO"<<endl;
        }
        else cout << "NO"<<endl;
    }
    return 0;
}
        
        
         
        

        
        
