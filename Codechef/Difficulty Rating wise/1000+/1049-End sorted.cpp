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
        int flag;
        int b,c,d;
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        for(int i=0;i<n;i++)
        {
	        if (v[i] == 1 || v[i] == n) {
	            d = v[i];
	            
	        if (v[i] == 1) b = i;
	        else c = n-i-1;
	        }
            
        }
        if(d == n)cout << b+c <<endl;
        else cout <<b+c-1<<endl;
    }
    return 0;
}
