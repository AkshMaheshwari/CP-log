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
        if((n-1)%3==0 || (n+1)%3==0)cout << "First"<<endl;

        else cout << "Second"<<endl;
    }

    return 0;
}