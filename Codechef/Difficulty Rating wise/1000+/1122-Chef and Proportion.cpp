#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    vector<float>v(4);
    for(int i=0;i<4;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    float a1 = v[0]/v[1];
    float a2 = v[2]/v[3];
    if(a1 == a2)cout << "Possible"<<endl;
    
    else cout <<"Impossible"<<endl;
    
    
    return 0;
}
