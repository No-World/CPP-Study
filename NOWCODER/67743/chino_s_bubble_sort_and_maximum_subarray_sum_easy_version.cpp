// Problem: chino's bubble sort and maximum subarray sum(easy version)
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67743/D
// Memory Limit: 1048576 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

ll a[N];

ll check(int n)
{
    ll cnt = a[0], ans = a[0];
    for (int i = 1; i < n; i++)
    {
        cnt = max(a[i], cnt + a[i]);
        ans = max(ans, cnt);
    }
    return ans;
}

void Solution(int __T)
{
    // 注意数组大小
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    ll ans = a[0];
    if (k)
    {
        for (int i = 1; i < n; i++)
        {
            swap(a[i - 1], a[i]);
            ans = max(ans, check(n));
            swap(a[i - 1], a[i]);
        }
    }
    else
    {
        ans = check(n);
    }
    printf("%lld\n", ans);
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