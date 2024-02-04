// Problem: 小天的 Minecraft
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/72041/C
// Memory Limit: 262144 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
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
using namespace std;
typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    ll a, b, c, d;
    double ans = 0;
    scanf("%lld%lld%lld", &a, &b, &c, &d);
    a *= a, a *= a, b *= b, b *= b, c *= c, c *= c;
    ll num = a + (b + c) * 1820, fm = 16 * 16 * 16 * 16;
    ans = 1.0 * num / fm;
    ans *= 1.0 * a / fm, ans *= 1.0 * a / fm, ans *= 1.0 * a / fm;
    printf("%.10lf\n", ans);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}