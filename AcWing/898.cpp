#include <cstdio>
#include <iostream>
using namespace std;
int sj[510][510], dp[510][510];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            scanf("%d", &sj[i][j]);
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        dp[n][i] = sj[n][i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {

            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]) + sj[i][j];
        }
    }
    printf("%d", dp[1][1]);

    return 0;
}