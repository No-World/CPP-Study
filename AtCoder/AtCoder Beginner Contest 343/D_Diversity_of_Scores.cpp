// Problem: D - Diversity of Scores
// Contest: AtCoder - AtCoder Beginner 比赛 343
// URL: https://atcoder.jp/contests/abc343/tasks/abc343_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
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
const int inf = 0x3f3f3f3f, N = 2e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<ll, ll> mp;
ll a[N];

void Solution(int __T)
{
    // 注意数组大小
    mp.clear();
    int n, t;
    scanf("%d%d", &n, &t);
    mp[0] = n;
    while (t--)
    {
        ll x, y;
        scanf("%lld%lld", &x, &y);
        mp[a[x]]--;
        if (!mp[a[x]])
        {
            mp.erase(a[x]);
        }
        a[x] += y;
        mp[a[x]]++;
        printf("%d\n", mp.size());
    }
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