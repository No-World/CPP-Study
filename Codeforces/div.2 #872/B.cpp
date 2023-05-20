// Problem: B. LuoTianyi and the Table
// Contest: Codeforces - Codeforces Round 872 (Div. 2)
// URL: https://codeforces.com/contest/1825/problem/B
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
const int inf = 0x3f3f3f3f, N = 1e4 + 10;
// const ll INF = __LONG_LONG_MAX__;

int a[N];

inline void Solution()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int sun = n * m;
    for (int i = 1; i <= sun; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + sun + 1);
    if (n < m)
    {
        swap(n, m);
    }
    printf("%d\n", max(a[sun] - a[2], a[sun - 1] - a[1]) * (m - 1) + (sun - m) * (a[sun] - a[1]));
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