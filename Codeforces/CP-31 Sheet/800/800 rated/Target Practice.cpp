#include <bits/stdc++.h>
#define int long long
#define am akshmaheshwari
using namespace std;
int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        int ans = 0;
        for(int i=0;i<10;i++)
        {
            for(int j = 0;j<10;j++)
            {
                char c;
                cin >> c;
                if(c == 'X')ans+=score[i][j];
            }
        }    
        cout << ans <<endl;
           
    }

    return 0;
}