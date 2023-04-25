// Problem: 编辑距离
// Contest: AcWing
// URL: https://www.acwing.com/problem/content/901/
// Memory Limit: 64 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <cstring>
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
const int inf = 0x3f3f3f3f, N = 1e1 + 10, M = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

char a[M][N];
int dp[N][N];
int n, m;

inline int edit_distance(char x[], char y[])
{
    int lenx = strlen(x + 1), leny = strlen(y + 1);
    for (int i = 0; i <= lenx; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 0; i <= leny; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 1; i <= lenx; i++)
    {
        for (int j = 1; j <= leny; j++)
        {
            dp[i][j] = min(dp[i - 1][j] + 1, dp[i][j - 1] + 1);
            dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (x[i] != y[j]));
        }
    }
    return dp[lenx][leny];
}

inline void Solution()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i < n + 1; i++)
    {
        scanf("%s", a[i] + 1);
    }
    while (m--)
    {
        char b[N];
        int limit, res = 0;
        scanf("%s %d", b + 1, &limit);
        for (int i = 1; i <= n; i++)
        {
            if (edit_distance(a[i], b) <= limit)
            {
                res++;
            }
        }
        printf("%d\n", res);
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