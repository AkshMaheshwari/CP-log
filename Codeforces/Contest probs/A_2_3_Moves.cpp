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
        int n;
        cin >> n;
        if(n == 1)cout << 2 <<endl;

        else 
        {
            if(n % 3 == 0)cout << n/3 <<endl;

            else cout << 1+n/3 <<endl; 
        }
    }

    return 0;
}