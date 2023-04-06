#include <cstdio>
using namespace std;
int main()
{
    long long n, a, b;
    scanf("%lld", &n);
    while (n--)
    {
        int ans = 0;
        scanf("%d%d", &a, &b);
        for (;;)
        {
            if (a <= 0 || b <= 0)
            {
                break;
            }
            if (a > b)
            {
                ans += a / b;
                a %= b;
            }
            else
            {
                ans += b / a;
                b %= a;
            }
            // ans++;
        }
        printf("%lld\n", ans);
    }

    return 0;
}