#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 110;
int triangle[MAXN][MAXN]; // 存储数字三角形
int dp[MAXN][MAXN];       // dp 数组

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            scanf("%d", &triangle[i][j]);
        }
    }
    // 初始化dp，对最后一行中间赋值
    // 因为向左下走的次数与向右下走的次数相差不能超过1
    // 所以如果输入N为奇数，那么最后一定会走到最后一行中间的位置
    // 如果输入N为偶数，那么最后一定会走到中间两个的其中之一
    if (n % 2 == 0)
    {
        dp[n - 1][n / 2] = triangle[n - 1][n / 2];
        dp[n - 1][n / 2 - 1] = triangle[n - 1][n / 2 - 1];
    }
    else
    {
        dp[n - 1][n / 2] = triangle[n - 1][n / 2];
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if (dp[i + 1][j] != 0 || dp[i + 1][j + 1] != 0)
            {
                dp[i][j] = max(dp[i + 1][j], dp[i + 1][j + 1]) + triangle[i][j];
            }
        }
    }
    printf("%d\n", dp[0][0]);
    return 0;
}