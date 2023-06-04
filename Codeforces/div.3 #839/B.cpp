// Problem: B. Matrix Rotation
// Contest: Codeforces - Codeforces Round 839 (Div. 3)
// URL: https://codeforces.com/contest/1772/problem/B
// Memory Limit: 512 MB
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
    int a[2][2];
    scanf("%d%d%d%d", &a[0][0], &a[0][1], &a[1][0], &a[1][1]);
    for (int i = 0; i < 4; i++)
    {
        if (a[0][0] < a[0][1] && a[1][0] < a[1][1] && a[0][0] < a[1][0] && a[0][1] < a[1][1])
        {
            printf("YES\n");
            return;
        }
        int x = a[1][0];
        a[1][0] = a[1][1];
        a[1][1] = a[0][1];
        a[0][1] = a[0][0];
        a[0][0] = x;
    }
    printf("NO\n");
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