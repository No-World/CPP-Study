#include <cstdio>
using namespace std;
int a[110], dp[110][10010];
int main()
{
    int m, n;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            dp[i][j] += dp[i - 1][j];
            if (j >= a[i])
            {
                dp[i][j] += dp[i - 1][j - a[i]];
            }
        }
    }
    printf("%d\n", dp[n][m]);

    return 0;
}