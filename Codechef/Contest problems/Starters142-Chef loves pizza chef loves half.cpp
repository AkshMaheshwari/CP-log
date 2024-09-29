#include <bits/stdc++.h>
#define int long long
using namespace std;
bool isPowerOfTwo(int n) 
{
    return n > 0 && (n & (n - 1)) == 0;
}

int nextpower(int n)
{
    if(n <= 0)return 1;
    
    return pow(2,ceil(log2(n)));
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(isPowerOfTwo(n))cout << 0 <<endl;
        
        else 
        {
            cout << n - (nextpower(n)-n) <<endl;
        }
    }
    return 0;
}
