#include <bits/stdc++.h>
#define int long long
#define am akshmaheshwari
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s[0] == 'a' || s[1] == 'b' || s[2] == 'c')cout << "YES"<<endl;

        else cout<< "NO"<<endl;
    }

    return 0;
}