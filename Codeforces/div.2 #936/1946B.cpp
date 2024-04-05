// Problem: B. Maximum Sum
// Contest: Codeforces Round 936 (Div. 2)
// URL: https://codeforces.com/contest/1946/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

ll a[N], b[N];

long long q_pow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void Solution(int __T)
{
    // 注意数组大小
    int n, k;
    ll mx = 0, mx1 = 0;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        b[i] = b[i - 1] + a[i];
        mx1 = max(a[i], mx1 + a[i]);
        mx = max(mx, mx1);
    }
    if (mx <= 0)
    {
        printf("%lld\n", (b[n] % mod + mod) % mod);
    }
    else
    {
        ll ans = ((mx % mod * (q_pow(2, k, mod) - 1 + mod) % mod) % mod + b[n] % mod + mod) % mod;
        printf("%lld\n", ans);
    }
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