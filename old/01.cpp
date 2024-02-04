// Problem: 新春漫步
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/73955/G
// Memory Limit: 1048576 MB
// Time Limit: 4000 ms

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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e6 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N], b[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, m, ans = 1;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }
    int x, y, z;
    while (m--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> y >> z;
            a[y] -= z;
            if (a[y] < 1)
            {
                for (int i = y; a[i] < 1 && i > 0; i--)
                {
                    b[i] = b[y + 1];
                }
            }
        }
        else
        {
            cin >> y;
            cout << b[y] << '\n';
        }
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}