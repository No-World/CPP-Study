// Problem: D2. Zero-One (Hard Version)
// Contest: Codeforces - Codeforces Round 821 (Div. 2)
// URL: https://codeforces.com/contest/1733/problem/D2
// Memory Limit: 512 MB
// Time Limit: 3000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
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
typedef long long ll;
using namespace std;
const ll INF = __LONG_LONG_MAX__;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;

inline void Solution()
{
    ll n, x, y;
    scanf("%lld%lld%lld", &n, &x, &y);
    char s1[n + 1], s2[n + 1];
    scanf("%s%s", s1 + 1, s2 + 1);
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        if (s1[i] != s2[i])
        {
            a.push_back(i);
        }
    }
    n = a.size();
    if (n & 1)
    {
        printf("-1\n");
        return;
    }
    else if (n == 2 && a[0] + 1 == a[1])
    {
        printf("%lld\n", min(x, 2 * y));
        return;
    }
    else
    {
        vector<ll> d(n + 1);
        for (int i = 1; i <= n; i++)
        {
            d[i] = INF;
        }
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1)
            {
                d[i + 2] = min(d[i + 2], d[i] + 2 * x * (a[i + 1] - a[i]));
            }
            d[i + 1] = min(d[i + 1], d[i] + y);
        }
        printf("%lld\n", d[n] / 2);
    }
}

int main(int argc, char const *argv[])
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}