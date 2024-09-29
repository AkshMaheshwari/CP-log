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
        int k;
        cin >>k;
        int temp = v[k-1];
        sort(v.begin(),v.end());
        int j;
        for(int i=0;i<n;i++)
        {
            if(v[i] == temp)
            {
                j = i;
            }
        }
        cout << j+1<<endl;
        
        

    }
    return 0;
}
