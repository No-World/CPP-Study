// Problem: C - PC on the Table
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_c
// Memory Limit: 1024 MB
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    int h, w;
    scanf("%d%d", &h, &w);
    w--;
    for (int i = 0; i < h; i++)
    {
        char a[w + 1];
        scanf("%s", a);
        for (int i = 0; i < w; i++)
        {
            if (a[i] == a[i + 1] && a[i + 1] == 'T')
            {
                a[i] = 'P', a[i + 1] = 'C';
            }
        }
        printf("%s\n", a);
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