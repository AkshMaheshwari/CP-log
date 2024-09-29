#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin>>t;
    while(t--)
    {   int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int s=abs(d-b)+abs(c-a);
        
        if(k==s)
        cout<<"Yes"<<endl;
        else if (k<s)cout<<"No"<<endl;
        else if (k>s && (k-s)%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
  return 0;
}
