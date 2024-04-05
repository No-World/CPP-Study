// Problem: 本题又主要考察了贪心
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67741/E
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
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N], n, m, ans, u[N], v[N];

void dfs(int x)
{
    if (x == m + 1)
    {
        int t = 0;
        for (int i = 2; i <= n; i++)
        {
            if (a[1] < a[i])
                t++;
        }
        ans = min(ans, t + 1);
        return;
    }
    a[u[x]] += 3, dfs(x + 1), a[u[x]] -= 3;
    a[v[x]] += 3, dfs(x + 1), a[v[x]] -= 3;
    a[u[x]]++, a[v[x]]++, dfs(x + 1), a[u[x]]--, a[v[x]]--;
}

void Solution(int __T)
{
    // 注意数组大小
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d", &u[i], &v[i]);
    }
    ans = n;
    dfs(1);
    printf("%d\n", ans);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        // printf("%d\n", i);
        Solution(i);
    }
    return 0;
}