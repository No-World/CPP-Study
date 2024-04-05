// Problem: 显生之宙
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/76795/B
// Memory Limit: 524288 MB
// Time Limit: 4000 ms

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
const int inf = 0x3f3f3f3f, N = 5e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

ll a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a + 1, a + n + 1);
    ll ans = a[n], mul = 0;
    for (int i = 1; i < n; i++)
    {
        ans += a[i] + mul;
        if (a[i] + mul <= 0)
        {
            mul += a[i] + mul;
        }
        // printf("%d %d %d\n", __T, ans, a[i]);
    }
    printf("%lld\n", ans);
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
