// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    ll n, p, l, t;
    scanf("%lld%lld%lld%lld", &n, &p, &l, &t);
    ll tnum = (n - 1) / 7 + 1, anum = tnum / 2, ap = t * 2 + l;
    if (p <= l + t)
    {
        printf("%lld\n", n - 1);
        return;
    }
    if ((p + ap - 1) / ap <= anum)
    {
        printf("%lld\n", n - (p + ap - 1) / ap);
        return;
    }
    p -= anum * ap;
    printf("%lld\n", n - anum - (p - (tnum % 2 * t) + l - 1) / l);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}