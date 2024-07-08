#include <bits/stdc++.h>
#define int long long
using namespace std;
bool isprime(int n)
{
    int cnt=0,flag=1;
    for(int i=1;i<=n;i++)
    {
        if(n % i==0)cnt++;
    }
    if(cnt==2)return true;
    
    return false;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        
        for(int i=a+b+1;i<10000;i++)
        {
            if(isprime(i))
            {
                cout <<i-(a+b)<<endl;
                break;
            }
        }
    }
    return 0;
}
