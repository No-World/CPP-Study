// Problem: Kevin喜欢零(简单版本)
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/57683/D
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
typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    ll n, k;
    scanf("%lld%lld", &n, &k);
    ll a[n], b = pow((ll)10, k);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        if (a[i] % b == 0)
        {
            printf("1\n");
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ll sum = a[i];
        for (int j = i + 1; j < n; j++)
        {
            sum *= a[j];
            if (sum % b == 0)
            {
                printf("%d\n", j - i + 1);
                return;
            }
            if (!sum)
            {
                break;
            }
        }
    }
    printf("-1\n");
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