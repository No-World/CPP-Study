// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
// #include <unordered_map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <cstdlib>
typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<int, int> mp;

void Solution(int __T)
{
    int n, gcd = 0, ls, mx = -inf, cnt;
    scanf("%d%d", &n, &ls);
    if (n == 1)
    {
        printf("1\n");
        return;
    }
    mx = ls;
    mp[ls]++;
    for (int i = 1; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        mp[x]++;
        mx = max(mx, x);
        gcd = __gcd(gcd, abs(ls - x));
        // printf("%d %d %d\n", __T, mx, gcd);
    }
    cnt = mx;
    ll ans = 0;
    // printf("%d %d\n", mp[cnt], cnt);
    while (mp[cnt])
    {
        cnt -= gcd;
        ans++;
        if (ans >= n)
        {
            ans = n;
            cnt = mx + gcd;
            break;
        }
        // printf("%lld\n", ans);
    }
    // printf("%d %d\n", cnt, gcd);
    for (auto it : mp)
    {
        // printf("%d ", __T);
        // printf("%d %d ", it.first, it.second);
        ll x = mx - it.first;
        x /= gcd;
        x *= it.second;
        ans += x;
        // printf("%d\n", x);
    }
    printf("%lld\n", ans);
    mp.clear();
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