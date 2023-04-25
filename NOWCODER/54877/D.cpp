// Problem: 猫猫与主人
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/54877/D
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;
int a[N], b[N], c[N], d[N];
const int MAXN = 2e5 + 10;
struct ca
{
    int i, a, c;
} cat[MAXN];
pair<int, int> zr[MAXN];
int ans[MAXN];
inline bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
inline bool cmp2(ca a, ca b)
{
    return a.a < b.a;
}
inline void Solution()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> cat[i].a;
    for (int i = 1; i <= n; i++)
    {
        cat[i].i = i;
        cin >> cat[i].c;
    }
    for (int i = 1; i <= m; i++)
        cin >> zr[i].first;
    for (int i = 1; i <= m; i++)
        cin >> zr[i].second;
    sort(zr + 1, zr + 1 + m, cmp);
    sort(cat + 1, cat + 1 + n, cmp2);
    int ptop = 1;
    int ma = 0;
    for (int i = 1; i <= n; i++)
    {
        while (ptop <= m && cat[i].a >= zr[ptop].second)
        {
            ma = max(ma, zr[ptop].first);
            ptop++;
        }
        if (ma >= cat[i].c)
            ans[cat[i].i] = ma;
        else
            ans[cat[i].i] = -1;
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}