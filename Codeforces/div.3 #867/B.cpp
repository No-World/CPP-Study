// Problem: B. Karina and Array
// Contest: Codeforces - Codeforces Round 867 (Div. 3)
// URL: https://codeforces.com/contest/1822/problem/B
// Memory Limit: 256 MB
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
typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;

ll a[N];

inline void Solution()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a + 1, a + 1 + n);

    printf("%lld\n", max(a[1] * a[2], a[n] * a[n - 1]));
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