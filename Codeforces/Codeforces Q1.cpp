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
        string a,b;
        cin >> a >> b;
        int temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        cout << a <<" "<< b << endl;
    }

    return 0;
}