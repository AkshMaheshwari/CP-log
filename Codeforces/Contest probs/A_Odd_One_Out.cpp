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
        int a,b,c;
        cin >> a >> b >> c;
        if(a == b)cout << c <<endl;

        else if(b == c)cout << a <<endl;

        else if(a == c)cout << b <<endl;
    }

    return 0;
}