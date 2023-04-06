#include <cstdio>
#include <cmath>
using namespace std;
int a[110][110], b[110][110];
int main()
{
    int m, n, r, s, ans, he, y = 1, x = 1;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d%d", &r, &s);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 1; i <= m - r + 1; i++)
    {
        for (int j = 1; j <= n - s + 1; j++)
        {
            he = 0;
            for (int k = i; k < i + r; k++)
            {
                for (int p = j; p < j + s; p++)
                {
                    he += fabs(a[k][p] - b[k - i + 1][p - j + 1]);
                }
            }
            if (i == j && i == 1)
            {
                ans = he;
            }
            else if (ans > he)
            {
                ans = he;
                y = i;
                x = j;
            }
            // printf("%d %d %d %d %d %d\n", he, ans, i, j, y, x);
        }
    }
    for (int i = y; i < y + r; i++)
    {
        for (int j = x; j < x + s; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}