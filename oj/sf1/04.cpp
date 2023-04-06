#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    long long a, b, gcd;
    scanf("%lld%lld", &a, &b);
    gcd = __gcd(a, b);
    printf("%lld\n", gcd);
    return 0;
}