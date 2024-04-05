// Problem: 智乃的比较函数(normal version)
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67743/H
// Memory Limit: 524288 MB
// Time Limit: 2000 ms

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
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int t, n, x[N], y[N], z[N], d[10];

void Solution(int __T)
{
    // 注意数组大小
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i] >> z[i];
    for (int x1 = 1; x1 <= 3; x1++)
        for (int x2 = 1; x2 <= 3; x2++)
            for (int x3 = 1; x3 <= 3; x3++)
            {
                int ans = 0;
                d[1] = x1;
                d[2] = x2;
                d[3] = x3;
                for (int i = 1; i <= n; i++)
                {
                    if (z[i] == 1)
                    {
                        if (d[x[i]] <= d[y[i]])
                            ans = 1;
                    }
                    else
                    {
                        if (d[x[i]] > d[y[i]])
                            ans = 1;
                    }
                }
                if (ans == 0)
                {
                    cout << "Yes\n";
                    return;
                }
            }
    cout << "No\n";
    return;
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