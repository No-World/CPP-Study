// Problem: E. The Humanoid
// Contest: Codeforces Round  834 (Div. 3)
// URL: https://codeforces.com/contest/1759/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
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
typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

ll a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, h;
    scanf("%d%d", &n, &h);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a, a + n);
    int ans = -1;
    for (int j = 0; j < 3; j++)
    {
        int cnt2 = 2;
        int cnt3 = 1;
        ll tmp = h;
        for (int i = 0; i < n; i++)
        {
            while (tmp <= a[i])
            {
                if (cnt2 == j && cnt3 > 0)
                {
                    cnt3--;
                    tmp *= 3;
                }
                else if (cnt2 > 0)
                {
                    cnt2--;
                    tmp *= 2;
                }
                else
                {
                    break;
                }
            }
            if (tmp <= a[i])
            {
                break;
            }
            tmp += a[i] / 2;
            ans = max(i, ans);
        }
    }
    printf("%d\n", ans + 1);
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