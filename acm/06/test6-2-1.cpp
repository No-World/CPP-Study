#include <cstdio>
using namespace std;

const int MAX = 1e3 + 5;
int a[MAX][MAX], sum[MAX][MAX];

int main()
{
    int n, m, p;
    scanf("%d %d %d", &n, &m, &p);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            sum[i][j] = a[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];

    while(p--)
    {
        int x1, x2, y1, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if (x1 > x2)
        {
            int t = x2;
            x2 = x1;
            x1 = t;
        }
        if (y1 > y2)
        {
            int t = y2;
            y2 = y1;
            y1 = t;
        }

        printf("%d\n", sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1]);
    }
    return 0;
}