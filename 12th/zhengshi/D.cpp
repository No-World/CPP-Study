#include <cstdio>
#include <algorithm>
using namespace std;
long long a[200010];
int main()
{
    long long n, ans1 = 1, ans2 = 1, ans = 0, m = 0;
    bool c = false;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = 2; i <= n + 1; i++)
    {
        if (!c)
        {
            if (a[i] == a[i - 1])
            {
                ans1++;
            }
            else
            {
                m++;
                c = true;
            }
        }
        else
        {
            if (a[i] != a[i - 1])
            {
                if (ans1 > ans2)
                {
                    // printf("1:%lld %lld %lld %lld\n", ans, ans1, ans2, m);
                    ans += (ans1 - ans2) * m;
                    // printf("%lld %lld %lld\n", ans, ans1, ans2);
                    ans1 = min(ans1, ans2);
                    ans2 = 1;
                }
                else if (ans1 < ans2)
                {
                    // printf("2:%lld %lld %lld %lld\n", ans, ans1, ans2, m);
                    ans += ans2 - ans1;
                    // printf("%lld %lld %lld\n", ans, ans1, ans2);
                    ans1 = min(ans1, ans2);
                    ans2 = 1;
                }
                else
                {
                    ans2 = 1;
                }
                m++;
            }
            else
            {
                ans2++;
                // printf("%lld %lld %lld\n", a[i],ans2,m);
            }
        }
    }
    printf("%lld", ans);
    return 0;
}