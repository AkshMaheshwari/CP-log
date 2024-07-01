#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >>b;
        int maximum_area = b*b*a;
        int maximum_side = sqrt(maximum_area);
        cout << maximum_side- (maximum_side)%b<<endl;
    }
    return 0;
}
