// Problem: C. Cellular Network
// Contest: Educational Codeforces Round 15
// URL: https://codeforces.com/contest/702/problem/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms

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
typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

ll a[N], b[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%lld", &b[i]);
    }
    int j = 0;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        while (j + 1 < m && abs(a[i] - b[j]) >= abs(a[i] - b[j + 1]))
        {
            ++j;
        }
        ans = max(ans, abs(a[i] - b[j]));
    }

    printf("%lld\n", ans);
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