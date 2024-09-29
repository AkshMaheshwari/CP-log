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
        string a,b;
        cin >> a;
        cin >> b;
        int count_zeroA = 0;
        int count_oneA = 0;
        int count_zeroB = 0;
        int count_oneB = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == '0')count_zeroA++;
            
            if(a[i] == '1')count_oneA++;
            
            if(b[i] == '0')count_zeroB++;
            
            if(b[i] == '1')count_oneB++;
        }
        if(count_oneA == count_oneB && count_zeroA == count_zeroB)
        {
            cout << "YES"<<endl;
        }
        else cout << "NO"<<endl;
    }
    
    return 0;
}
