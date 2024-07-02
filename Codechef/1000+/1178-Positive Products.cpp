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
        int pcnt=0,ncnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i] > 0)pcnt++;
            
            else if(v[i] < 0)ncnt++;
        }
        cout << pcnt*(pcnt-1)/2 + ncnt*(ncnt-1)/2 <<endl;
        
    }
    return 0;
}
