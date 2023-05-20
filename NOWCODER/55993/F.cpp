// Problem: Fake Maxpooling
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/55993/F
// Memory Limit: 524288 MB
// Time Limit: 6000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 5e3 + 10;
// const ll INF = __LONG_LONG_MAX__;
long long a[N][N], b[N][N];

inline long long lcm(int x, int y)
{
    return x * y / __gcd(x, y);
}

inline void Solution()
{
    long long n, m, k;
    scanf("%lld%lld%lld", &n, &m, &k);
    for (int i = 1; i <= n; i++)
    {
        a[i][1] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        a[1][i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            a[i][j] = lcm(i, j);
        }
    }
    long long ans = 0;
    for (int i = 1; i <= n - k + 1; i++)
    {
        long long mx = 0;
        for (int x = 0; x < k; x++)
        {
            for (int y = 0; y < k; y++)
            {
                b[i][1] = max(mx, a[i + y][1 + x]);
            }
        }
    }
    for (int i = 1; i <= n - k + 1; i++)
    {
        long long mx = 0;
        for (int x = 0; x < k; x++)
        {
            for (int y = 0; y < k; y++)
            {
                b[i][1] = max(mx, a[i + y][1 + x]);
            }
        }
    }
    printf("%lld\n", ans);
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}