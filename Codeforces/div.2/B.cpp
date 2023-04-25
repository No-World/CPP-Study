// Problem: B. Sort the Subarray
// Contest: Codeforces - Educational Codeforces Round 147 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1821/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
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
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;
int a1[N], a2[N];
inline void Solution()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a2[i]);
    }
    int len1 = 0, len2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a1[i] != a2[i])
        {
            len1 = i;
            break;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (a1[i] != a2[i])
        {
            len2 = i;
            break;
        }
    }
    int l, r;
    for (int i = len1 - 1; i > 0; i--)
    {
        if (a2[i] > a2[i + 1])
        {
            l = i + 1;
            break;
        }
        if (i == 1)
        {
            l = 1;
        }
    }
    for (int i = len2 + 1; i <= n; i++)
    {
        if (a2[i] < a2[i - 1])
        {
            r = i - 1;
            break;
        }
        if (i == n)
        {
            r = n;
        }
    }
    if (len1 == 1)
    {
        l = 1;
    }
    if (len2 == n)
    {
        r = n;
    }
    printf("%d %d\n", l, r);
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