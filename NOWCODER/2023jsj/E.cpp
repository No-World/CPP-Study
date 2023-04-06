#include <bits/stdc++.h>
using namespace std;
#define int long long
int T;
int dp[2][27][27][27][27];
int n, a, b, c, d;
void solve()
{
    scanf("%lld", &n);
    // memset(dp,-0x3f,sizeof(dp));
    dp[0][0][0][0][0] = 0;
    int op = n / 4;
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
        int qa = i % 2;
        int qb = qa ^ 1;
        for (int q = 0; q <= op; q++)
        {
            for (int w = 0; w <= op; w++)
            {
                for (int e = 0; e <= op; e++)
                {
                    for (int r = 0; r <= op; r++)
                    {
                        dp[qa][q][w][e][r] = 0;
                    }
                }
            }
        }
        for (int q = 0; q <= op; q++)
        {
            for (int w = 0; w <= op; w++)
            {
                for (int e = 0; e <= op; e++)
                {
                    for (int r = 0; r <= op; r++)
                    {
                        if (dp[qb][q][w][e][r] < 0)
                            continue;
                        int ef = dp[qb][q][w][e][r];
                        dp[qa][q + 1][w][e][r] = max(dp[qa][q + 1][w][e][r], ef + a);
                        dp[qa][q][w + 1][e][r] = max(dp[qa][q][w + 1][e][r], ef + b);
                        dp[qa][q][w][e + 1][r] = max(dp[qa][q][w][e + 1][r], ef + c);
                        dp[qa][q][w][e][r + 1] = max(dp[qa][q][w][e][r + 1], ef + d);
                    }
                }
            }
        }
    }
    cout << dp[n % 2][op][op][op][op];
}
signed main()
{
    T = 1;
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cin>>T;
    while (T--)
    {
        solve();
    }

    return 0;
}
