// Problem: A. Grasshopper on a Line
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1837/problem/A
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
    int x, k, OX = 0;
    scanf("%d%d", &x, &k);
    if (x % k == 0)
    {
        printf("2\n%d %d\n", x - 1, 1);
    }
    else
    {
        printf("1\n%d\n", x);
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