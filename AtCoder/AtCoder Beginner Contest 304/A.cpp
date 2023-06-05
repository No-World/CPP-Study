// Problem: A - First Player
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 304)
// URL: https://atcoder.jp/contests/abc304/tasks/abc304_a
// Memory Limit: 1024 MB
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
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e2 + 10;
// const ll INF = __LONG_LONG_MAX__;

char s[N][20];
int a[N];

inline void Solution()
{
    int n, mn = inf, num;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", s[i], &a[i]);
        if (a[i] < mn)
        {
            mn = a[i], num = i;
        }
    }
    for (int i = num; i < n; i++)
    {
        printf("%s %d\n", s[i], a[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("%s %d\n", s[i], a[i]);
    }
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