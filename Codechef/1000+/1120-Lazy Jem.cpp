#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int probs,brk,tm;
        cin >> probs>>brk>>tm;
        int ans=0;
        int n = probs;
        while(probs)
        {
            if(probs % 2==0)
            {
                ans = ans+tm*(probs)/2+brk;
                tm*=2;
                probs/=2;
            }
            else 
            {
                ans=ans+tm*(probs+1)/2+brk;
                tm*=2;
                probs/=2;
            }
        }
        cout <<ans-brk <<endl;
    }
    return 0;
}
