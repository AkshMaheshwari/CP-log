#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int sum = x * (x+1)/2;
        if(sum %  2 == 0)cout << x <<endl;
        
        else cout << x-1<<endl;
        

    }
    return 0;
}
