// Problem: All with Pairs
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/55993/A
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
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline int lcm(int x, int y)
{
    return x * y / __gcd(x, y);
}

inline void Solution()
{
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    int a[n + 1][m + 1];
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
            a[i][j] = lcm(a[i - 1][j], a[i][j - 1]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n - k + 1; i++)
    {
        for (int j = 1; j <= m - k + 1; j++)
        {
            ans += max(max(a[i][j], a[i + 1][j]), max(a[i][j + 1], a[i + 1][j + 1]));
        }
    }
    printf("%d\n", ans);
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