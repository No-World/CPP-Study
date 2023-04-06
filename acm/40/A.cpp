#include <cstdio>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    ll sum = 0;
    while (n--)
    {
        int a;
        scanf("%d", &a);
        sum += a;
    }
    if (sum >= k)
    {
        sum = sum - (k + 1) / 2;
    }
    else
    {
        sum = 0;
    }
    printf("%lld", sum);
    return 0;
}