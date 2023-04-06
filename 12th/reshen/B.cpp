#include <cstdio>
#include <algorithm>
using namespace std;
int a[20010];
int main()
{
    long long n, k, ans = 0;
    int i;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (i = n; i > 0; i -= k)
    {
        ans += (a[i] - 1);
        // printf("%d %d %d\n", ans, a[i], i);
    }
    ans = ans * 2;
    printf("%lld", ans);
    return 0;
}