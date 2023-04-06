#include <cstdio>
using namespace std;
int main()
{
    long long a, b, n, i, sum = 0, week;
    scanf("%lld%lld%lld", &a, &b, &n);
    week = a * 5 + b * 2;
    long long c = n / week;
    n %= week;
    for (i = 1; sum < n; i++)
    {
        if (i % 7 == 0 || (i + 1) % 7 == 0)
        {
            sum += b;
        }
        else
        {
            sum += a;
        }
    }
    printf("%lld\n", i - 1 + c * 7);

    return 0;
}