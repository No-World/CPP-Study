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
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

vector<int> a[N];

bool check(int x, int m, int n)
{
    bool flag = 0;
    int num = 0, vis[n + 10];
    for (int i = 0, cnt = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] >= x)
            {
                cnt++;
                vis[j] = 1;
            }
        }
        if (cnt > 1)
        {
            flag = 1;
        }
        cnt = 0;
    }
    for (int i = 1; i < n; i++)
    {
        vis[i] += vis[i - 1];
    }

    if (!flag || vis[n - 1] < n)
    {
        return 0;
    }
    return 1;
}

void Solution(int __T)
{
    // 注意数组大小
    int mx = 0, mn = inf, m, n;
    scanf("%d%d", &m, &n);
    for (int i = 0, x; i < m; i++)
    {
        a[i].clear();
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x);
            a[i].push_back(x);
            mx = max(x, mx);
            mn = min(x, mn);
        }
    }
    while (mx > mn)
    {
        int mid = (mx + mn + 1) >> 1;
        if (check(mid, m, n))
        {
            mn = mid;
        }
        else
        {
            mx = mid - 1;
        }
    }
    printf("%d\n", mn);
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