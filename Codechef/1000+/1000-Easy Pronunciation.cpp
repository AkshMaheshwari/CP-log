#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        
        bool isHard = false;
        
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;
                if(count == 4)
                {
                    isHard = true;
                    break;
                }
            }
        }
        
        if(isHard)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
