#include <bits/stdc++.h>
#define int long long
#define am akshmaheshwari
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        int cnt2 =0;
        for(int i=0;i<n;i++)
        {
            if(v[i] == 2)
            {
                cnt2++;
            }
        }
        int temp=0;
        if(cnt2 % 2!=0)cout << -1 <<endl;

        else if(cnt2 == 0)cout << 1 <<endl;

        else if(cnt2 % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if(v[i] == 2)
                {
                    temp++;

                    if(temp == cnt2/2)
                    {
                        cout << i+1 <<endl;
                        break;
                    }
                }
            }

        }

    }
    return 0;
}