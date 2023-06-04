// Problem: P2760 科技庄园
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P2760
// Memory Limit: 125 MB
// Time Limit: 1000 ms
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
const int inf = 0x3f3f3f3f, N = 1e2 + 10;
// const ll INF = __LONG_LONG_MAX__;

int n, m, s, r, W, a[N][N], b[N][N], c[N * N], dp[N], t[N * N], w[N * N], p;

inline void Solution()
{
    scanf("%d%d%d%d", &n, &m, &s, &r);
    W = min(s, r - 1);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf("%d", &b[i][j]);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] > 0 && b[i][j] > 0)
            {
                w[++p] = (i + j) * 2;
                c[p] = a[i][j];
                t[p] = b[i][j];
            }
    for (int i = 1; i <= p; i++)
        for (int k = 1; k <= t[i]; k++)
            for (int j = W; j >= w[i]; j--)
                dp[j] = max(dp[j], dp[j - w[i]] + c[i]);
    printf("%d\n", dp[W]);
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
    }
    Solution();
    return 0;
}