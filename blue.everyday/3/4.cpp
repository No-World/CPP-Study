#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;
int n, g;
int a[101];
bool f[10000];
int main()
{
    scanf("%d", &n);
    f[0] = true;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        if (i == 1)
        {
            g = a[i]; // 初始化最大公因数
        }
        else
        {
            g = __gcd(a[i], g); // n个数的最大公因数
        }
        for (int j = 0; j < 10000; j++)
        {
            if (f[j])
            {
                f[j + a[i]] = true;
            }
        }
    }

    if (g != 1)
    {
        printf("INF\n");
        return 0;
    }
    int ans = 0;
    for (int i = 0; i < 10000; i++)
    {
        if (!f[i])
        {
            ans++;
            // printf("%d\n", i);
        }
    }
    printf("%d", ans);
    return 0;
}