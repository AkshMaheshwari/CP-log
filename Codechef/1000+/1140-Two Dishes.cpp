#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b,c;
        cin >> n >> a >> b >> c;
        if(a+c >= n && b >=n)cout << "Yes"<<endl;
        
        else cout << "No"<<endl;
    }
    return 0;
}
