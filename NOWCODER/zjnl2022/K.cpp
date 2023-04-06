#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long x;
        scanf("%lld", &x);
        for (long long i = x + 2;; i++)
        {
            long long j = i - x;
                if (__gcd(i,j) == 1)
                {
                    printf("%lld %lld\n", j, i);
                    break;
                }
        }
    }
    return 0;
}