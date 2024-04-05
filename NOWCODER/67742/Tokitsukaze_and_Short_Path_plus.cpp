// Problem: Tokitsukaze and Short Path (plus)
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67742/I
// Memory Limit: 524288 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
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
using namespace std;
typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

ll a[N];

void Solution(int __T)
{
    // 注意数组大小
    // 边权|a_u + a_v| + |a_u - a_v| = 2 * max(a_u, a_v)
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a, a + n);
    ll sum = 0;
    for (int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[n - 1] - a[i];
    }
    printf("%lld\n", sum * 4);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}