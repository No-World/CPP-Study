#include <cstdio>
using namespace std;
typedef long long ll;
ll a[100010];
int main()
{
    ll n, k;
    scanf("%lld%lld", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans = 0, ANS = 0;
    for (int i = 1; i <= n; i++)
    {
        ANS = 0;
        for (int j = i; j <= n; j++)
        {
            ANS += a[j];
            if (ANS >= 10)
            {
                ans += n - j + 1;
                break;
            }
        }
    }
    printf("%d\n", ans);

    return 0;
}