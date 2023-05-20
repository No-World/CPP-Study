// Problem: B - Same Map in the RPG World
// Contest: AtCoder - ユニークビジョンプログラミングコンテスト2023 春 (AtCoder Beginner Contest 300)
// URL: https://atcoder.jp/contests/abc300/tasks/abc300_b
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

char a[40][40], b[40][40];

inline void Solution()
{
    int h, w;
    scanf("%d%d", &h, &w);
    for (int i = 1; i <= h; i++)
    {
        scanf("%s", a[i] + 1);
    }
    for (int i = 1; i <= h; i++)
    {
        scanf("%s", b[i] + 1);
    }
    bool flag = false;
    for (int i = 0; i < h && !flag; i++)
    {
        for (int j = 0; j < w && !flag; j++)
        {
            flag = true;
            for (int x = 1; x <= w && flag; x++)
            {
                for (int y = 1; y <= h && flag; y++)
                {
                    int xa = x + j, ya = y + i;
                    if (xa > w)
                    {
                        xa -= w;
                    }
                    if (ya > h)
                    {
                        ya -= h;
                    }
                    if (a[ya][xa] != b[y][x])
                    {
                        flag = false;
                    }
                }
            }
        }
    }
    if (flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
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