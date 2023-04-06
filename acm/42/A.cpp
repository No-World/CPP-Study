#include <cstdio>
#include <algorithm>
using namespace std;
long long a[100010], b[100010];
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i] + a[i + 1];
        // printf("%d %d\n", a[i], b[i]);
    }
    sort(b + 1, b + n);
    // for (int i = 1; i < n; i++)
    // {
    //     printf("%d %d\n", a[i], b[i]);
    // }

    long long ans = 0;
    for (int i = 1; i < k; i++)
    {
        ans += b[n - i] - b[i];
    }
    printf("%lld\n", ans);

    return 0;
}