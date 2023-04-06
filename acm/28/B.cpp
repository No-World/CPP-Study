#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[1010][1010];
int main()
{
    int n, m, p, x1, x2, y1, y2;
    memset(a, 0, sizeof(a));
    scanf("%d%d%d", &n, &m, &p);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
            a[i][j] += a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1];
        }
    }
    while (p--)
    {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        if (x1 > x2)
        {
            swap(x1, x2);
        }
        if (y1 > y2)
        {
            swap(y1, y2);
        }
        printf("%d\n", a[x2][y2] - a[x1 - 1][y2] - a[x2][y1 - 1] + a[x1 - 1][y1 - 1]);
    }

    return 0;
}