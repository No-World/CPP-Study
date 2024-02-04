// Problem: D. Road to Post Office
// Contest: Educational Codeforces Round 15
// URL: https://codeforces.com/contest/702/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    ll d, k, a, b, t;
    scanf("%lld%lld%lld%lld%lld", &d, &k, &a, &b, &t);
    if (d < k)
    {
        printf("%lld\n", d * a);
        return;
    }
    ll ans = k * a + b * (d - k);
    ans = min(ans, d * a + t * ((d - 1) / k));
    ans = min(ans, a * (d - d % k) + t * (d / k - (d % k != 0 ? 1 : 0)) + (d % k) * b);
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