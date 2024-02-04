// Problem: A. Matching
// Contest: Codeforces - Educational Codeforces Round 147 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1821/problem/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
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
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    char a[10];
    scanf("%s", a + 1);
    int n = strlen(a + 1), ans = 1;
    if (a[1] == '0')
    {
        printf("0\n");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i] == '?')
            {
                if (i == 1)
                {
                    ans *= 9;
                }
                else
                {
                    ans *= 10;
                }
            }
        }
        printf("%d\n", ans);
    }
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