// Problem: B. Nene and the Card Game
// Contest: Codeforces - Codeforces Round 939 (Div. 2)
// URL: https://codeforces.com/contest/1956/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<int, bool> mp;

void Solution(int __T)
{
    // 注意数组大小
    int n, x, ans = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        if (mp.count(x))
        {
            ans++;
        }
        else
        {
            mp[x] = 1;
        }
    }
    printf("%d\n", ans);
    mp.clear();
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