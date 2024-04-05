// Problem: 伊甸之花
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/76795/A
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
const int inf = 0x3f3f3f3f, N = 1e6 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, m, x;
    scanf("%d%d", &n, &m);
    bool flag1 = 1, flag2 = 1;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 1)
        {
            flag1 = 0;
        }
        if (a[i] == m)
        {
            flag2 = 0;
        }
    }
    if (flag1 || flag2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}