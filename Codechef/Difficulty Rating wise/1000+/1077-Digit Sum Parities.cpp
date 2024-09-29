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
        int num = n;
        int nines =0;
        while(n % 10 == 9)
        {
            nines++;
            n/=10;
        }
        if(nines % 2 == 1)cout <<num+2<<endl;
        
        else cout <<num+1 <<endl;


        
    }
    return 0;
}
