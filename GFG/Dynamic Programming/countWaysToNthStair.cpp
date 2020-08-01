#include <iostream>
using namespace std;
#define mod 1000000007

int main()
{
    int dp[100001];
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i < 100001; i++)
        dp[i] = (dp[i - 2] % mod + dp[i - 1] % mod) % mod;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n - 1] << '\n';
    }
    return 0;
}