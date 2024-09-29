#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        int horizontal = 2*(n-1);
        int diagonal=0;
        diagonal+=min(x-1,y-1);
        diagonal+=min(n-x,n-y);
        diagonal+=min(n-x,y-1);
        diagonal+=min(x-1,n-y);
        cout << horizontal+diagonal<<endl;
    }
    return 0;
}
