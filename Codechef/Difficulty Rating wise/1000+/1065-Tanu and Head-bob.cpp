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
        int ind=0,nind=0,ns=0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == 'I')ind++;
            
            else if(s[i] == 'N')ns++;
            
            else nind++;
        }
        if(ind!=0)cout << "INDIAN"<<endl;
        
        else if(nind!=0)cout << "NOT INDIAN"<<endl;
        
        else cout << "NOT SURE"<<endl;
    }
    return 0;
}
