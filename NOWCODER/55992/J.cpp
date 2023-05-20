// Problem: Easy Integration
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/55992/J
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
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
typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
const ll INF = __LONG_LONG_MAX__, MOD = 998244353;

inline void Solution()
{
    double n;
    scanf("%lf", &n);
    double nj = 1, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        nj *= i;
    }
    for (int k = 0; k <= n; k++)
    {
        double kj = 1;
        for (int i = 1; i <= k; i++)
        {
            kj *= i;
        }
        if (k % 2 == 0)
        {
            ans += nj / kj / kj / (n + k + 1);
        }
        else
        {
            ans -= nj / kj / kj / (n + k + 1);
        }
    }
    printf("%lld\n", ((ll)(ans * M) % MOD) % MOD);
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