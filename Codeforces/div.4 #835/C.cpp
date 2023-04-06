#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
long long a[200010], n, b;
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        long long max1 = 0, max2 = 0, na;
        memset(a, 0, sizeof(a));
        scanf("%lld", &n);
        for (int j = 1; j <= n; j++)
        {
            scanf("%lld", &a[j]);
            if (a[j] > max1)
            {
                max1 = a[j];
                na = j;
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (j == na)
            {
                for (int k = 1; k <= n; k++)
                {
                    if (k == na)
                    {
                        continue;
                    }
                    else
                        max2 = max(max2, a[k]);
                }
                b = a[j] - max2;
            }
            else
                b = a[j] - max1;
            printf("%lld ", b);
        }
        printf("\n");
    }

    return 0;
}