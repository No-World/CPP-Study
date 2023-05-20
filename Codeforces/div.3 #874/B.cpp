// Problem: B. Restore the Weather
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/B
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

struct tianqi
{
    int wd, wc;
};
inline bool cmp(tianqi x, tianqi y)
{
    return x.wd < y.wd;
}
inline bool cmp1(tianqi x, tianqi y)
{
    return x.wc < y.wc;
}
inline void Solution()
{
    int n, m;
    scanf("%d%d", &n, &m);
    tianqi a[n + 10];
    int b[n + 10];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i].wd);
        a[i].wc = i;
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
    }
    sort(a + 1, a + n + 1, cmp);
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i].wd = b[i];
    }
    sort(a + 1, a + n + 1, cmp1);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i].wd);
    }
    printf("\n");
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