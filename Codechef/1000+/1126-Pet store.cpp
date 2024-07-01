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
        if(n%2!=0)cout << "No"<<endl;
        
        else
        {
            int i;
            for(i=0;i<n;i+=2)
            {
                if(v[i]!=v[i+1])
                {
                    cout <<"No"<<endl;
                    break;
                }
                
            }
            if(i==n)
            cout << "Yes"<<endl;
        }
       
    }
    return 0;
}
