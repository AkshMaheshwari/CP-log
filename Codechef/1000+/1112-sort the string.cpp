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
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1' && s[i+1] == '0')cnt++;
        }
        cout << cnt <<endl;
    }
    return 0;
}
