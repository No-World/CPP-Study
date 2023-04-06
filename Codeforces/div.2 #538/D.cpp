#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    n = unique(a.begin() + 1, a.end()) - a.begin() - 1; // 将同色的一段缩点

    // dp[l][r]表示在区间[l, r]中选一个起始砖块, 将[l, r]中的砖块变为同色所需的最小操作次数
    vector<vector<int>> dp(n + 1, vector<int>(n + 1));
    for (int len = 2; len <= n; len++)
    {
        for (int l = 1; l + len - 1 <= n; l++)
        {
            int r = l + len - 1;

            if (a[l] != a[r])
            {
                dp[l][r] = min(dp[l + 1][r], dp[l][r - 1]) + 1;
            }
            else
            {
                dp[l][r] = dp[l + 1][r - 1] + 1;
            }
        }
    }
    printf("%d\n", dp[1][n]);
    return 0;
}