#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    long long a[100010];
    memset(a, 0, sizeof(a));
    int n, q, x, y;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        a[i] += a[i - 1];
    }
    while (q--)
    {
        scanf("%d%d", &x, &y);
        printf("%lld\n", a[y] - a[x - 1]);
    }

    return 0;
}