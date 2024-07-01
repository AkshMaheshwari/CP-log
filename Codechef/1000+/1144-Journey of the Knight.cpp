#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if((x1+y1)%2 == (x2+y2)%2)cout <<"Yes"<<endl;
        
        else cout << "No"<<endl;
    }
    return 0;
}
