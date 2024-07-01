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
        int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
        for(int i=0;i<s.size();i++)
        {
             if(s[i] == '1')c1++;
             if(s[i] == '2')c2++;
             if(s[i] == '3')c3++;
             if(s[i] == '4')c4++;
             if(s[i] == '5')c5++;
             if(s[i] == '6')c6++;
             if(s[i] == '7')c7++;
             if(s[i] == '8')c8++;
             if(s[i] == '9')c9++;
            
        }
        cout <<c1+2*c2+3*c3+4*c4+5*c5+6*c6+7*c7+8*c8+9*c9<<endl;
    }
    return 0;
}
