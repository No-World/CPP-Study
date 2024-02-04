// Problem: D2. Half of Same
// Contest: Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/D2
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<int, int> mp;

void Solution(int __T)
{
    // 注意数组大小
    int n, mn = inf, mx = -inf;
    scanf("%d", &n);
    int helf = (n + 1) / 2, flag = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        mn = min(x, mn);
        mx = max(x, mx);
        mp[x]++;
        if (!flag && mp[x] > helf)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        printf("-1\n");
        return;
    }
    int mx1 = mx - mn;
    for (int i = mx1; i; i--)
    {
        int x = 0;
        for (auto p : mp)
        {
            if ((p.first - mn) % i != 0)
            {
                break;
            }
            x += p.second;
        }
        if (x >= helf)
        {
            printf("%d\n", i);
            return;
        }
    }
}

int main(int argc, char const *argv[])
{
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