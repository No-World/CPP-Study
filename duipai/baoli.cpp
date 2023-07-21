#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 3;
int tr[N * 4];
void add(int u, int l, int r, int p, int x)
{
    if (l == r)
        return tr[u] = x, void();
    int mid = l + r >> 1;
    if (p <= mid)
        add(u * 2, l, mid, p, x);
    else
        add(u * 2 + 1, mid + 1, r, p, x);
    tr[u] = max(tr[u * 2], tr[u * 2 + 1]);
}
int ask(int u, int l, int r, int x, int y)
{
    if (y < l || x > r)
        return 0;
    if (x <= l && r <= y)
        return tr[u];
    int mid = l + r >> 1, ans = 0;
    if (x <= mid)
        ans = max(ans, ask(u * 2, l, mid, x, y));
    if (y > mid)
        ans = max(ans, ask(u * 2 + 1, mid + 1, r, x, y));
    return ans;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].first;
    for (int i = 0; i < n; i++)
        cin >> a[i].second;

    long long sum = 0;
    vector<pair<int, int>> S, T;
    for (auto [x, y] : a)
        if (x < y)
            S.push_back({x, y}), sum += y - x;
        else if (x > y)
            T.push_back({y, x}), sum += x - y;

    int R = INT_MIN;
    sort(T.begin(), T.end());
    vector<int> Tx, Ty;
    for (auto [x, y] : T)
        if (y > R)
            Tx.push_back(x), Ty.push_back(y), R = y;

    if (Tx.empty())
        return cout << sum, 0;

    int lim = Tx.size(); // init segTree
    for (int i = 0; i < lim; i++)
        add(1, 1, lim, i + 1, Ty[i] - Tx[i]);

    int ans = 0;
    for (auto [x, y] : S)
    { // [l..r-1] 被完全包含
        int l = lower_bound(Tx.begin(), Tx.end(), x) - Tx.begin();
        if (l > 0)
            ans = max(ans, min(y, Ty[l - 1]) - x);
        int r = lower_bound(Ty.begin(), Ty.end(), y) - Ty.begin();
        if (r < lim)
            ans = max(ans, y - max(x, Tx[r]));
        if (l <= r - 1)
            ans = max(ans, ask(1, 1, lim, l + 1, r));
    }

    cout << sum - 2ll * ans;

    return 0;
}
