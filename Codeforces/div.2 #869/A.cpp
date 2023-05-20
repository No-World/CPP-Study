// Problem: A. Politics
// Contest: Codeforces - Codeforces Round 869 (Div. 2)
// URL: https://codeforces.com/contest/1818/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
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

inline void Solution()
{
    int n, k, ans = 0;
    scanf("%d%d", &n, &k);
    string a, b;
    cin >> a;
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        if (a == b)
        {
            ans++;
        }
    }
    printf("%d\n", ans + 1);
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