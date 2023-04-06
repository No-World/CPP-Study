#include <cstdio>
using namespace std;
double a[110][110], b[110][110];
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%lf", &a[j][i]);
            b[j][i] = a[j][i];
        }
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = 2; j < m; j++)
        {
            b[j][i] = (a[j + 1][i] + a[j - 1][i] + a[j][i + 1] + a[j][i - 1] + a[j][i]) / 5;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("%.0lf ", b[j][i]);
        }
        printf("\n");
    }
    return 0;
}