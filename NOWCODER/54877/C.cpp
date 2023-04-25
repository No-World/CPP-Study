// Problem: 猫猫与数列
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/54877/C
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
// #include <cstring>
// #include <algorithm>
#include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
typedef long double ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
const ll INF = __LONG_LONG_MAX__, M = 1e18;
ll a[10];

inline void Solution()
{
    scanf("%llf%llf", &a[1], &a[2]);
    int i = 3;
    for (i = 3; a[i - 1] <= M; i++)
    {
        a[i] = pow(a[i - 2], a[i - 1]);
    }
    printf("%d", i - 2);
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