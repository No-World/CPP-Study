// Problem: D - Count Subtractions
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_d
// Memory Limit: 1024 MB
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    long long x, y, ans = 0;
    scanf("%lld%lld", &x, &y);
    while (x != y)
    {
        if (x > y)
        {
            swap(x, y);
        }
        if (y % x > 0)
        {
            ans = ans + (y / x);
            y = y % x;
        }
        else
        {
            ans += (y / x) - 1;
            y = x;
        }
    }
    printf("%lld\n", ans);
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}