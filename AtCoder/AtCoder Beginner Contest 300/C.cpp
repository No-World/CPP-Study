// Problem: C - Cross
// Contest: AtCoder - ユニークビジョンプログラミングコンテスト2023 春 (AtCoder Beginner Contest 300)
// URL: https://atcoder.jp/contests/abc300/tasks/abc300_c
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
const int inf = 0x3f3f3f3f, N = 1e2 + 10;
// const ll INF = __LONG_LONG_MAX__;

char a[N][N];
int b[N], h, w;

inline bool check(int x, int y, int n)
{
    if (x + n > w || y + n > h || x - n < 1 || y - n < 1)
    {
        return false;
    }
    if (a[y + n][x + n] == a[y + n][x - n] &&
        a[y + n][x - n] == a[y - n][x + n] &&
        a[y - n][x + n] == a[y - n][x - n] &&
        a[y - n][x - n] == '#')
    {
        return true;
    }
    return false;
}

inline void Solution()
{
    scanf("%d%d", &h, &w);
    int mn = min(h, w);
    for (int i = 1; i <= h; i++)
    {
        scanf("%s", a[i] + 1);
    }
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (a[i][j] == '#')
            {
                for (int k = 1; k <= mn; k++)
                {
                    if (!check(j, i, k))
                    {
                        b[k - 1]++;
                        break;
                    }
                }
            }
        }
    }
    for (int i = 1; i <= mn; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
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