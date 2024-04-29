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
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 3e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int dp[N];

void init()
{
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= 3e5; i++)
    {
        dp[i] = (dp[i - 1] + 1LL * 2 * (i - 1) * dp[i - 2] % mod) % mod;
    }
}

void Solution(int __T)
{
    // 注意数组大小
    int n, k;
    scanf("%d%d", &n, &k);
    int x, y;
    while (k--)
    {
        scanf("%d%d", &x, &y);
        n -= 1 + (x != y);
    }
    printf("%d\n", dp[n]);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    init();
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}