#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll num[1000010];
int main()
{
    ll n;
    scanf("%lld", &n);
    ll empt = 0, max_s = 0;
    for (int i = 1; i <= n; i++)
    {
        ll a, x;
        scanf("%d%d", &a, &x);
        empt = __gcd(empt, a - x);
        max_s = max(max_s, x);
    }
    for (ll i = 1; i * i <= empt; i++)
    {
        if (empt % i == 0)
        {
            num[0]++;
            num[num[0]] = i;
            if (i * i != empt)
            {
                num[0]++;
                num[num[0]] = empt / i;
            }
        }
    }
    int ans = 0;
    sort(num + 1, num + num[0] + 1);
    for (int i = 1; i <= num[0]; i++)
    {
        if (num[i] > max_s)
        {
            ans++;
        }
    }
    printf("%d\n", ans);
    for (int i = 1; i <= num[0]; i++)
    {
        if (num[i] > max_s)
        {
            printf("%lld\n", num[i]);
        }
    }
    
    return 0;
}