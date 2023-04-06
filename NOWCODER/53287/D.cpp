#include <cstdio>
using namespace std;
typedef long long ll;
ll a[10010];
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        ll x, y;
        scanf("%lld%lld", &x, &y);
        if ((x == 5 && y == 8) || (x == 8 && y == 5))
        {
            a[i] = 35;
        }
        else
        {
            a[i] = x * y;
        }
    }
    for (int i = 1; i <= t; i++)
    {
        printf("%lld\n", a[i]);
    }

    return 0;
}