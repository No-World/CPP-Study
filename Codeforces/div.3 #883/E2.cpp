// Problem: E2. Rudolf and Snowflakes (hard version)
// Contest: Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/E2
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
#include <cmath>
// #include <queue>
#include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
typedef long long ll;
typedef __int128 lll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e6 + 10, mod = 1e9 + 7;
const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<ll, bool> mp;

void init()
{
    for (lll i = 2; i < 1e6; i++)
    {
        lll num = 1 + i + i * i + i * i * i, last = i * i * i;
        while (num <= 1e18)
        {
            mp[num] = 1;
            last *= i;
            num += last;
        }
    }
}

void Solution(int __T)
{
    // 注意数组大小
    ll n;
    scanf("%lld", &n);
    if (mp.count(n))
    {
        printf("YES\n");
        return;
    }
    ll k = 4 * n - 3;
    ll kk = sqrt(k);
    if (kk * kk == k && ((kk - 1) & 1) == 0 && (kk - 1) / 2 >= 2)
    {
        printf("YES\n");
        return;
    }
    printf("NO\n");
}

int main(int argc, char const *argv[])
{
    init();
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}