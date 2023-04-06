#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;

int n, m, ans, trans, dp[110][110];
;
int main()
{
    scanf("%d%d", &n, &m);
    int x[9] = {0, 0, 0, -1, -1, -1, -2, -2, -3};
    int y[9] = {-1, -2, -3, 0, -1, -2, 0, -1, 0}; // 逆向寻找
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            scanf("%d", &dp[i][j]);
            int trans = -2147483648;
            for (int k = 1; k < 9; ++k)
            {
                if (i + x[k] > 0 && j + y[k] > 0)
                { // 寻找能“一步”到（i,j）的最大权值
                    trans = max(trans, dp[i + x[k]][j + y[k]]);
                }
            }
            if (trans != -2147483648)
            {
                dp[i][j] += trans; // 叠加
            }
        }

    printf("%d\n", dp[n][m]);
    return 0;
}