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
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

using namespace std;

vector<long long> a, b;
vector<long long> best_pre, best_suf;

long long f(vector<long long> &arr)
{
    long long best = 0, cur = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        best = max(best, cur + arr[i]);
        cur = max(cur + arr[i], 0LL);
    }
    return best;
}

void Solution(int __T)
{
    int n;
    cin >> n;

    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (a[i] > b[i])
        {
            swap(a[i], b[i]);
        }
    }

    long long ans = f(a) + f(b);
    best_pre.assign(n + 2, 0);
    best_suf.assign(n + 2, 0);

    best_pre[0] = max(best_pre[0], b[0]);

    for (int i = 1; i < n; ++i)
    {
        best_pre[i] = max(best_pre[i], best_pre[i - 1] + b[i]);
    }

    int i = n - 1;
    best_suf[n - 1] = max(best_suf[n - 1], b[n - 1]);

    while (i >= 0)
    {
        best_suf[i] = max(best_suf[i], best_suf[i + 1] + b[i]);
        --i;
    }

    long long best_sub = 0;
    long long sum = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += a[i] + b[i];
        ans = max(ans, sum + best_suf[i + 1] + best_sub);
        best_sub = max(best_sub, best_pre[i] - sum);
    }

    for (int i = 1; i < n; ++i)
    {
        best_pre[i] = max(best_pre[i], best_pre[i - 1]);
    }

    i = n - 1;

    while (i >= 0)
    {
        best_suf[i] = max(best_suf[i], best_suf[i + 1]);
        ans = max(ans, best_pre[i] + best_suf[i + 1]);
        --i;
    }

    cout << ans << endl;
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}