// Problem: Tokitsukaze and Cats
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67742/B
// Memory Limit: 524288 MB
// Time Limit: 2000 ms

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
using namespace std;
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 3e2 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

bool a[N][N];

void Solution(int __T)
{
    // 注意数组大小
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    while (k--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        a[x][y] = 1;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j])
            {
                ans += 4 - a[i - 1][j] - a[i][j - 1];
            }
        }
    }
    printf("%d\n", ans);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}