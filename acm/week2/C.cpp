#include <cstdio>
#include <algorithm>
using namespace std;

long long x[1010], y[1010], z[1010];

int main()
{
    long long n, m, sl = 0, yz = 0, rp = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%lld%lld%lld", &x[i], &y[i], &z[i]);
    sort(x + 1, x + n + 1);
    sort(y + 1, y + n + 1);
    sort(z + 1, z + n + 1);
    sl = max(fabs(x[1] + x[2] + x[3]), fabs(x[n] + x[n - 1] + x[n - 2]));
    yz = max(fabs(y[1] + y[2] + y[3]), fabs(y[n] + y[n - 1] + y[n - 2]));
    rp = max(fabs(z[1] + z[2] + z[3]), fabs(z[n] + z[n - 1] + z[n - 2]));
    
    return 0;
}