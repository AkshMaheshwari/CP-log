#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,a;
        cin >> n >> a;
        cout << min(a,n-a) <<endl;
    }
    return 0;
}
