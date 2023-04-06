#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[200010], b[200010], e[30];
char d[200010];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        memset(d, 0, sizeof(d));
        memset(e, 0, sizeof(e));
        int n, ans = 0;
        scanf("%d", &n);
        scanf("%s", d + 1);
        for (int i = 1; i <= n; i++)
        {
            if (!e[d[i] - 'a' + 1])
            {
                e[d[i] - 'a' + 1]++;
                a[i]++;
            }
            a[i] += a[i - 1];
        }
        memset(e, 0, sizeof(e));
        for (int i = n; i >= 1; i--)
        {
            if (!e[d[i] - 'a' + 1])
            {
                e[d[i] - 'a' + 1]++;
                b[i]++;
            }
            b[i] += b[i + 1];
        }
        for (int i = 0; i <= n; i++)
        {
            int sum;
            sum = a[i] + b[i + 1];
            ans = max(ans, sum);
        }
        printf("%d\n", ans);
    }

    return 0;
}
