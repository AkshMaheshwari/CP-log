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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int count=0,max=0;
        sort(v.begin(),v.end());
        for(int i=1;i<n;i++)
        {
            if(v[i-1] == v[i])
            {
                count++;
            }
            else
            {
                count=0;
            }
            if(count > max)
            {
                max = count;
            }
        }
        cout <<n-max-1<<endl;
    }
    return 0;
}
