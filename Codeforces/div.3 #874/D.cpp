// Problem: D. Flipper
// Contest: Codeforces - Codeforces Round 874 (Div. 3)
// URL: https://codeforces.com/contest/1833/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
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

inline void Solution()
{
    int n, l, r = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[r])
        {
            r = i;
        }
    }

    l = max(0, r == n - 1 ? r - 1 : r - 2);
    while (l > 0)
    {
        if (a[0] > a[l])
        {
            break;
        }
        l--;
    }

    // cout << l << ' ' << r << '\n';

    for (int i = r; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    for (int i = r - 1; i > l; i--)
    {
        cout << a[i] << ' ';
    }
    for (int i = 0; i <= l; i++)
    {
        cout << a[i] << ' ';
    }
    puts("");
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