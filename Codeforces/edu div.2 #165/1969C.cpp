// Problem: C. Minimizing the Sum
// Contest: Educational Codeforces Round 165 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1969/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
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
const ll INF = 1e18, MOD = 1e9 + 7;

ll a[N];

void Solution(int __T)
{
    // 注意数组大小
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, INF));
    dp[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i][0] = dp[i - 1][0] + a[i];
    }
    // 输入 && 初始化
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            ll res = a[i];
            dp[i][j] = min(dp[i][j], dp[i - 1][j] + res); // 本次不操作的情况
            for (int l = 1; l <= j && l + 1 <= i; l++)
            {
                res = min(res, a[i - l]); // 找到这一段范围的最小值
                dp[i][j] = min(dp[i][j], dp[i - l - 1][j - l] + (l + 1) * res);
            } // 枚举本次连续操作的次数，来进行转移
        }
    }
    ll ans = INF;
    for (int i = 0; i <= k; i++)
    {
        ans = min(dp[n][i], ans);
    }
    cout << ans << endl;
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}