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
        if(a < b && b > c)cout <<"PEAK"<<endl;

        else if(a < b && b < c)cout << "STAIR"<<endl;

        else cout << "NONE" <<endl;

    }

    return 0;
}