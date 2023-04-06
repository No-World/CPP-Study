#include <cstdio>
using namespace std;
int main()
{
    int ans = 0, t;
    long long x;
    scanf("%d", &t);
    while (t--)
    {
        long long p = 0;
        scanf("%lld", &x);
        for (int i = 1; x > p; i++)
        {
            for (int j = 1; j <= 9; j++)
            {
                for (int k = 0; k < i; k++)
                {
                    p = p * 10 + j;
                }
                if (p > x)
                {
                    break;
                }
                ans++;
                // printf("%lld %lld\n", p, x, ans, i);
                p = 0;
            }
        }
        printf("%d\n", ans);
        ans = 0;
    }

    return 0;
}