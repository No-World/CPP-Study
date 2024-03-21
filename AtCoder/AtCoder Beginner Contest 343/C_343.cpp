// Problem: C - 343
// Contest: AtCoder - AtCoder Beginner 比赛 343
// URL: https://atcoder.jp/contests/abc343/tasks/abc343_c
// Memory Limit: 1024 MB
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
typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

bool check(ll n)
{
    ll x = n, p1 = 1, p2 = 1;
    int i = 0;
    while (x)
    {
        x /= 10;
        i++;
    }

    while (--i)
    {
        p1 *= 10;
    }
    while (p1 > p2)
    {
        if (n / p1 % 10 != n / p2 % 10)
        {
            return 0;
        }
        p1 /= 10, p2 *= 10;
    }
    return 1;
}

void Solution(int __T)
{
    // 注意数组大小
    ll n, mx = 0;
    scanf("%lld", &n);
    for (ll i = 1; i * i * i <= n; i++)
    {
        if (check(i * i * i))
        {
            mx = i * i * i;
        }
    }
    printf("%lld\n", mx);
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