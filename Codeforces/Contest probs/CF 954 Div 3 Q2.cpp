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
        
        int m,n;
        cin >> m >> n;
        int matrix[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> matrix[i][j];
                if(matrix[i][j] > matrix[i+1][j] && matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i][j+1] && matrix[i][j] > matrix[i][j-1])
                {
                    
                    matrix[i][j] --;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout << matrix[i][j] <<endl;;
            }
        }

    }

    return 0;
}