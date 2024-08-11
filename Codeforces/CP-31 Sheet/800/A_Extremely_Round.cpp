#include <bits/stdc++.h>
#define int long long
#define am akshmaheshwari
using namespace std;

int count_numbers_with_one_non_zero_digit(int n)
{
    int count = 0;
    for(int digit = 1; digit <= 9; digit++) // 1 to 9 because leading digit must be non-zero
    {
        for(int x = digit; x <= n; x = x * 10)
        {
            count++;
        }
    }
    return count;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = count_numbers_with_one_non_zero_digit(n);
        cout << ans << endl;
    }

    return 0;
}
