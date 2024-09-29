#include <bits/stdc++.h>
#define int long long
using namespace std;
int getdigitsum(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>nos(n);
        for(int i=0;i<n;i++)
        {
            cin >> nos[i];
        }
        int product = 0,mx=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                product=nos[i]*nos[j];
                int sum = getdigitsum(product);
                mx = max(mx,sum);
            }
        }
        cout <<mx<<endl;
    }
    return 0;
}
