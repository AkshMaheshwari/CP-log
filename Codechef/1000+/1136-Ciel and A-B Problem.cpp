#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int a,b;
    cin >> a >> b;
    int c = a-b;
    if(c % 10 == 9)cout << c-1<<endl;
    
    else cout << c+1<<endl;
    return 0;
}
