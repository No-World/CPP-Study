// Problem: M. Different Billing
// Contest: Codeforces - 2023 Hubei Provincial Collegiate Programming Contest
// URL: https://codeforces.com/gym/104337/problem/M
// Memory Limit: 512 MB
// Time Limit: 1000 ms
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
    int x, y;
    scanf("%d%d", &x, &y);
    int mod1 = y / 2500;
    y %= 2500;
    int mod2 = y / 1000;
    y %= 1000;
    if (mod1 + mod2 > x || y != 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d %d %d\n", x - mod1 - mod2, mod2, mod1);
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