#include <cstdio>
#include <iostream>
using namespace std;
int a[310], dp[310][310];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        a[i] += a[i - 1];
    }
    for (int len = 2; len <= n; len++)
    {
        for (int i = 1; i + len - 1 <= n; i++)
        {
            int j = i + len - 1;
            dp[i][j] = 1e8;
            for (int k = i; k < j; k++)
            {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + a[j] - a[i - 1]);
            }
        }
    }
    printf("%d\n", dp[1][n]);

    return 0;
}