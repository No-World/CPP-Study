#include <cstdio>
#include <iostream>
using namespace std;
int w[2010], v[2010], dp[2][2010], ww[2010], vv[2010];
int main()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &w[i], &v[i]);
        ww[i] = w[i] + k;
        vv[i] = v[i] * 2;
        for (int j = m; j >= w[i]; j--)
        { // 用了魔法不是在该物品上用的
            dp[1][j] = max(dp[1][j], dp[1][j - w[i]] + v[i]);
        }
        for (int j = m; j >= ww[i]; j--)
        { // 用了魔法是在该物品上用的
            dp[1][j] = max(dp[1][j], dp[0][j - ww[i]] + vv[i]);
        }
        for (int j = m; j >= w[i]; j--)
        { // 没用魔法
            dp[0][j] = max(dp[0][j], dp[0][j - w[i]] + v[i]);
        }
    }

    printf("%d\n", dp[m]);

    return 0;
}