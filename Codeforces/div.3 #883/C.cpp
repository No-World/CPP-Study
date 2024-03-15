// Problem: C. Rudolf and the Another Competition
// Contest: Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <algorithm>
#include <cstring>
#include <iostream>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

struct human
{
    ll point, time;
} a[N];

ll b[N];

void Solution(int __T)
{
    // 注意数组大小
    ll n, m, h, ans = 0;
    scanf("%lld%lld%lld", &n, &m, &h);
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < m; i++)
        {
            scanf("%lld", &b[i]);
        }
        sort(b, b + m);
        ll t = b[0];
        for (int j = 0; j < m && t <= h; j++)
        {
            a[i].point++;
            a[i].time += t;
            t += b[j + 1];
        }
        if (i)
        {
            if (a[0].point < a[i].point || (a[0].point == a[i].point && a[0].time > a[i].time))
            {
                ans++;
                // printf("%d %d %d %d %d\n", i, a[i].point, a[i].time, a[0].point, a[0].time);
            }
        }
        // printf("%d %d %d\n", i, a[i].point, a[i].time);
    }
    printf("%d\n", ans + 1);
    for (int i = 0; i < n; i++)
    {
        a[i].point = a[i].time = 0;
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