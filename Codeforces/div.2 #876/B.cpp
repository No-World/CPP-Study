// Problem: B. Lamps
// Contest: Codeforces - Codeforces Round 876 (Div. 2)
// URL: https://codeforces.com/contest/1839/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
const int inf = 0x3f3f3f3f, N = 1e5 + 10;
// const ll INF = __LONG_LONG_MAX__;

struct lamb
{
    int a, b, c;
} a[N];

inline bool cmp(lamb x, lamb y)
{
    if (x.b == y.b)
    {
        return x.c > y.c;
    }

    return x.b < y.b;
}

inline void Solution()
{
    int n;
    scanf("%d", &n);
    int b[n];
    for (int i = 0; i < n; i++)
    {
        a[i].a = i + 1;
        scanf("%d%d", &a[i].b, &a[i].c);
        b[a[i].b]++;
    }
    sort(a, a + n, cmp);
    printf("%d %d %d\n", a[0].a, a[0].b, a[0].c);
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