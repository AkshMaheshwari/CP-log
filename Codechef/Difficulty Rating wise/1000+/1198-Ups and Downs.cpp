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
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(i % 2!=0 && v[i] < v[i+1])swap(v[i],v[i+1]);
        }
        for(int i=0;i<n;i++)
        {
            cout << v[i] << " ";
        }
        cout <<endl;
    }
    return 0;
}
