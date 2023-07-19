#include <bits/stdc++.h>

#define int long long
#define de(x) cout << #x << " = " << x << endl
#define dd(x) cout << #x << " = " << x
using namespace std;
using ll = long long;
const int MOD = 998244353;

ll qpow(ll x, ll n)
{
    ll res = 1;
    while (n)
    {
        if (n & 1)
            res = res * x % MOD;
        n >>= 1;
        x = x * x % MOD;
    }

    return res;
}

ll inv(ll x)
{
    return qpow(x, MOD - 2);
}

int f(int n, int &r)
{
    r = -1;
    int k = 1;
    while (k <= n + 1)
        k <<= 1, r++;
    return k - 2;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;

    ll st = 1;
    for (int l = n, r, k; l < n + m; l = r + 1)
    {
        r = min(f(l, k), n + m - 1);

        ll p = (1 - qpow(inv(2), k) + MOD) % MOD;

        st = st * qpow(p, r - l + 1) % MOD;
    }

    cout << st << '\n';
    return 0;
}
