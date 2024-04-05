// Problem: 按闹分配
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67741/C
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

ll a[N], sum[N], n;

void Solution(int __T)
{
    // 注意数组大小
    ll q, t;
    scanf("%lld%lld%lld", &n, &q, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a, a + n);
    sum[0] = a[0];
    // printf("%lld %lld\n", 0, sum[0]);
    for (int i = 1; i < n; i++)
    {
        sum[i] = sum[i - 1] + a[i];
        // printf("%lld %lld\n", i, sum[i]);
    }
    while (q--)
    {
        ll m;
        scanf("%lld", &m);
        m /= t;
        if (m >= n)
        {
            printf("%lld\n", t);
        }
        else
        {
            printf("%lld\n", sum[n - m - 1] + t);
        }
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}