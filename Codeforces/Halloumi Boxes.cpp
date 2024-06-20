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
        vector <int> a(n);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        if(k == 1 && !is_sorted(a.begin(),a.end()))
        {
            cout << "NO"<<endl;
        }
        else cout << "YES"<<endl;
    }

    return 0;
}