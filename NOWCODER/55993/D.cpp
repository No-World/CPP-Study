// Problem: Duration
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/55993/D
// Memory Limit: 524288 MB
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
    int h1, m1, s1, h2, m2, s2;
    scanf("%d:%d:%d\n%d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
    printf("%d\n", abs((h2 - h1) * 3600 + (m2 - m1) * 60 + s2 - s1));
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