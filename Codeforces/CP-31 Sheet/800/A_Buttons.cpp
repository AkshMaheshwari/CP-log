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
        int total = a+b+c;
        if(a==b)
        {
            if(total % 2 == 0)cout << "Second"<<endl;

            else cout <<"First"<<endl;
        }
        else if(a > b)cout << "First"<<endl;

        else if(b > a)cout << "Second" <<endl;
    }

    return 0;
}