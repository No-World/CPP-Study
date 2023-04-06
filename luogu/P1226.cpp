#include <cstdio>
using namespace std;

typedef long long ll;

ll fpow(ll a, ll b, ll p)
{
    ll res = 1;
    while (b)
    {
        if (b & 1) // 检查b是否为偶数
        {
            res = res * a % p;
        }
        a = a * a % p;
        b >>= 1;
    }
    return res;
}

int main()
{
    ll a, b, p;
    scanf("%lld%lld%lld", &a, &b, &p);
    printf("%lld^%lld mod %lld=%lld", a, b, p, fpow(a, b, p));
    return 0;
}