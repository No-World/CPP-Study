// Problem: B. Comparison String
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1837/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
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
typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    ll n;
    scanf("%lld", &n);
    char s[n + 10];
    scanf("%s", s + 1);
    ll num = 1;
    ll ans = 1;
    for (int i = 2; i <= n; i++)
    {
        if (s[i] == s[i - 1])
        {
            num++;
            ans = max(ans, num);
        }
        else
        {
            num = 1;
        }
    }
    printf("%lld\n", ans + 1);
}

int main(int argc, char const *argv[])
{
    int T = 1;
    scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}