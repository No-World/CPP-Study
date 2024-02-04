// Problem: 小天的魔法
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/72041/B
// Memory Limit: 262144 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N], b[N];

void Solution(int __T)
{
    int n, m, x, num = 0, cnt = 0;
    scanf("%d%d%d", &n, &m, &x);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    sort(a, a + n), sort(b, b + m);
    for (num = 1; num <= m; num++)
    {
        if (b[m - num] >= x)
        {
            printf("%d", cnt + 1);
            return;
        }
        if (num <= n && a[n - num] > 1)
        {
            x -= a[n - num] * b[m - num];
            cnt += 2;
            if (x <= 0)
            {
                printf("%d\n", cnt);
                return;
            }
        }
        else
        {
            x -= b[m - num];
            ++cnt;
        }
    }
    printf("-1");
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