// Problem: D. Super-Permutation
// Contest: Codeforces - Codeforces Round 867 (Div. 3)
// URL: https://codeforces.com/contest/1822/problem/D
// Memory Limit: 256 MB
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
// #incude <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 1)
    {
        if (n == 1)
        {
            printf("1\n");
            return;
        }
        printf("-1\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                printf("%d ", i);
            }
            else
            {
                printf("%d ", n - i);
            }
        }
        printf("\n");
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