#include <cstdio>
#include <cmath>
using namespace std;

bool prime[20000010];

int gp(long long p)
{
    prime[1] = prime[0] = true;
    for (long long i = 2; i <= p; i++)
        if (!prime[i])
            for (long long j = i * i; j <= p; j += i)
            {
                prime[j] = true;
                // printf("%d %d\n", i, j);
            }

    return 0;
}

int main()
{
    long long n;
    scanf("%lld", &n);
    gp(n + 1);
    while (n--)
        if (!prime[n] && !prime[n - 2])
            printf("%d %d\n", n, n - 2);

    return 0;
}