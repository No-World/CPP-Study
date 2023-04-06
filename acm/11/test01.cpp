#include <cstdio>
#include <iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    return b == 0? a : gcd(b, a % b);
}

int main()
{
    ll a, b;
    while (scanf("%lld%lld", &a, &b) != EOF)
    {
        if (b > a)
            swap(a,b);
        printf("%lld\n", gcd(a,b));
    }
    return 0;
}