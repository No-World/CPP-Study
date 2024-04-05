// Problem: why买外卖
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67741/G
// Memory Limit: 524288 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

struct mul
{
    ll a, b;
} a[N];

bool cmp(mul x, mul y)
{
    return x.a > y.a;
}

void Solution(int __T)
{
    // 注意数组大小
    ll n, m;
    scanf("%lld %lld\n", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld\n", &a[i].a, &a[i].b);
        m += a[i].b;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        if (a[i].a > m)
        {
            m -= a[i].b;
        }
        else
        {
            break;
        }
    }
    printf("%lld\n", m);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}