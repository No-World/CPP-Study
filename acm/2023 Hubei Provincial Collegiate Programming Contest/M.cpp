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
    for (int i = 0; i <= x; i++)
    {
        int c = y - (i * 1000);
        if (c % 2500 == 0)
        {
            int j = c / 2500;
            if (j <= x - i)
            {
                printf("%d %d %d\n", x - i - j, i, j);
                return;
            }
        }
    }
    printf("-1\n");
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