#include <cstdio>
using namespace std;
const int MOD = 998244353;
unsigned long long f[100005];
unsigned long long g[100005];

int main()
{
    int t;
    scanf("%d", &t);
    f[1] = 8, g[1] = 1;
    for (int i = 2; i <= 100000; i++)
    {
        f[i] = f[i - 1] * 9 + g[i - 1];
        g[i] = g[i - 1] * 9 + f[i - 1];
        f[i] %= MOD;
        g[i] %= MOD;
    }
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        if (n == 1)
        {
            puts("9");
            continue;
        }
        printf("%llu\n", f[n]);
        continue;
    }
    return 0;
}