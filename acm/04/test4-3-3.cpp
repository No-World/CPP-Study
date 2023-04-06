#include <cstdio>
using namespace std;
int a[1001000];
int main()
{
    int n, m, x, y;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &x, &y);
        for (int j = x; j <= y; j++)
        {
            a[j]++;
        }
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &x);
        printf("%d\n", a[x]);
    }
    return 0;
}