// Problem: D1. All are Same
// Contest: Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/D1
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
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N], b[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, mn = inf;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        mn = min(a[i], mn);
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int b;
        b = a[i] - mn;
        x = __gcd(x, b);
        if (x == 1)
        {
            break;
        }
    }
    if (!x)
    {
        printf("-1\n");
        return;
    }
    printf("%d\n", x);
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