// Problem: C - Dango
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 299)
// URL: https://atcoder.jp/contests/abc299/tasks/abc299_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
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
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;

char a[N];

inline void Solution()
{
    int n;
    scanf("%d%s", &n, a);
    int mx = 0, js = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'o')
        {
            js++;
        }
        else if (js)
        {
            mx = max(js, mx);
            js = 0;
            flag = true;
        }
        else
        {
            flag = true;
        }
    }
    if (flag)
    {
        mx = max(mx, js);
    }
    if (mx)
        printf("%d\n", mx);
    else
        printf("-1\n");
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