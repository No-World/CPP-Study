#include <cstdio>
#include <algorithm>
using namespace std;
long long n, m, k, ans;
long long a[200010];
int main()
{
    scanf("%lld%lld%lld", &n, &m, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = n; i >= n - m * k + 1; i--)
    {
        ans += a[i];
    }
    printf("%lld\n", ans);
    return 0;
}