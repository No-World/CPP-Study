// Problem: 猫猫与广告
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/54877/A
// Memory Limit: 524288 MB
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
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if ((c >= a && d >= b) || (c >= b && d >= a))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
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