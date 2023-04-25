// Problem: B - Trick Taking
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 299)
// URL: https://atcoder.jp/contests/abc299/tasks/abc299_b
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
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;

struct B
{
    int ys, fs, sz;
} a[N];
int t, t1;

inline bool cmp(B x, B y)
{
    if (x.ys == y.ys || (x.ys != t && y.ys != t) && (x.ys != t1 && y.ys != t1))
    {
        return x.fs > y.fs;
    }
    else if (x.ys == t)
    {
        return true;
    }
    else if (y.ys == t)
    {
        return false;
    }
    else if (x.ys == t1)
    {
        return true;
    }
    else if (y.ys == t1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

inline void Solution()
{
    int n;
    scanf("%d%d", &n, &t);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i].ys);
        a[i].sz = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i].fs);
    }
    t1 = a[0].ys;
    sort(a, a + n, cmp);
    printf("%d\n", a[0].sz);
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