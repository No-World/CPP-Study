#include <cstdio>
using namespace std;
int a[100010];
int main()
{
    int n;
    long long ans = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        a[i] += a[i - 1];
    }
    if (a[n] % 3 == 0)
    {
        for (int i = 3, cnt = 0; i <= n; i++)
        {
            if (a[i - 2] == a[n] / 3)
            {
                cnt++;
            }
            if (a[n] - a[i - 1] == a[n] / 3)
            {
                ans += cnt;
            }
        }
    }
    printf("%lld\n", ans);
    return 0;
}