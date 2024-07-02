#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>scores(n);
        for(int i=0;i<n;i++)
        {
            cin >>scores[i];
        }
        int hard_cnt=0,cakewalk_cnt=0;
        for(int i=0;i<n;i++)
        {
            if(scores[i] >=k/2)cakewalk_cnt++;
            
            else if(scores[i] <= k/10)hard_cnt++;
        }
        if(cakewalk_cnt == 1 && hard_cnt == 2)cout << "yes"<<endl;
        
        else cout << "no"<<endl;
    }
    return 0;
}
