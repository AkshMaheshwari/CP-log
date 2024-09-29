#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int even,odd;
        even = n/2;
        odd = n-n/2;
        cout <<even*odd*2 <<endl;
    }
    return 0;
}
