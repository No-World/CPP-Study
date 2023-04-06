#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int a[100010], n, m, k, x, y, b, sum = 0;
    memset(a, 0, sizeof(a));
    scanf("%d%d%d", &n, &m, &k);
    while (m--)
    {
        scanf("%d%d%d", &x, &y, &b);
        a[x] += b;
        a[y + 1] -= b;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
        if (a[i] > k)
        {
            sum++;
        }
    }
    printf("%d", sum);

    return 0;
}