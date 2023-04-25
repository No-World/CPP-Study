// Problem: D - Find by Query
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 299)
// URL: https://atcoder.jp/contests/abc299/tasks/abc299_d
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
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    int n;
    scanf("%d", &n);
    int l = 1, r = n;
    for (int i = 0; i < 20; i++)
    {
        if (l + 1 == r)
        {
            printf("! %d\n", l);
            fflush(stdout);
            return;
        }
        int mid = l + r >> 1;
        printf("? %d\n", mid);
        fflush(stdout);
        int s;
        scanf("%d", &s);
        if (s)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
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