#include <cstdio>
#include <iostream>
using namespace std;
typedef long long ll;
const ll N = 50000, INF = 1e9;
ll w[N + 10], g[N + 10], h[N + 10], f[N + 10];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 1; i < n + 1; i++)
        {
            scanf("%lld", &w[i]);
        }
        f[0] = g[0] = -INF;
        for (int i = 1; i < n + 1; i++)
        {
            f[i] = max(f[i - 1], (ll)0) + w[i];
            g[i] = max(g[i - 1], f[i]);
        }
        h[n + 1] = f[n + 1] = -INF;
        for (int i = n; i; i--)
        {
            f[i] = max(f[i + 1], (ll)0) + w[i];
            h[i] = max(h[i + 1], f[i]);
        }
        ll ans = -INF;
        for (int i = 1; i < n + 1; i++)
        {
            ans = max(ans, g[i] + h[i + 1]);
        }
        printf("%lld\n", ans);
    }

    return 0;
}