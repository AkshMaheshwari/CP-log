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
        int n,k;
        cin >> n >> k;
        if(n % k!=0)
        {
            cout << 1 <<endl;
            cout << n <<endl;
        }
        else 
        {
            cout << 2 <<endl;
            cout << n-1 <<" "<<1 <<endl;
        }
    }

    return 0;
}