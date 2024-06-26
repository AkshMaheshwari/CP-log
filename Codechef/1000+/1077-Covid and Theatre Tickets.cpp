#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int allowed_rows = (a+1)/2;
        int allowed_seats = (b+1)/2;
        cout << allowed_seats*allowed_rows <<endl;
    }
    return 0;
}
