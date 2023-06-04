// Problem: P1279 字串距离
// Contest: Luogu
// URL: https://www.luogu.com.cn/problem/P1279
// Memory Limit: 125 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
#include <cstring>
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
const int inf = 0x3f3f3f3f, N = 2e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

char a[N], b[N];
int dp[N][N];

inline void Solution()
{
    int k;
    scanf("%s%s%d", a + 1, b + 1, &k);
    int lena = strlen(a + 1) + 1, lenb = strlen(b + 1) + 1;
    dp[0][0] = 0;
    for (int i = 1; i < N; i++)
    {
        dp[0][i] = dp[i][0] = dp[i - 1][0] + k;
    }
    for (int i = 1; i < lena; i++)
    {
        for (int j = 1; j < lenb; j++)
        {
            dp[i][j] = min(dp[i - 1][j] + k, min(dp[i][j - 1] + k, dp[i - 1][j - 1] + abs((int)a[i] - (int)b[j])));
        }
    }
    printf("%d\n", dp[lena - 1][lenb - 1]);
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