// Problem: A. TubeTube Feed
// Contest: Codeforces - Codeforces Round 867 (Div. 3)
// URL: https://codeforces.com/contest/1822/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

int a[N], b[N];

inline void Solution()
{
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        a[i] += i - 1;
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &b[i]);
    }
    int mx = 0, cnt;
    for (int i = 1; i <= n; i++)
    {
        if (q >= a[i])
        {
            if (b[i] > mx)
            {
                mx = b[i];
                cnt = i;
            }
        }
    }
    if (mx)
    {
        printf("%d\n", cnt);
    }
    else
    {
        printf("-1\n");
    }
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