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
        int a=0,b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'A')a++;

            else b++;
        }
        if(a > b) cout << "A"<<endl;

        else cout << "B" << endl;
    }

    return 0;
}