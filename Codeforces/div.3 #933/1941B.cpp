// Problem: B. Rudolf and 121
// Contest: Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/contest/1941/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
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
using namespace std;
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] && a[i + 2] && a[i + 1] > 1)
        {
            int x = min({a[i], a[i + 1] / 2, a[i + 2]});
            a[i] -= x;
            a[i + 1] -= 2 * x;
            a[i + 2] -= x;
            if (a[i])
            {
                printf("NO\n");
                return;
            }
        }
        else if (a[i])
        {
            printf("NO\n");
            return;
        }
    }
    if (a[n - 1] || a[n - 2])
    {
        printf("NO\n");
        return;
    }
    printf("YES\n");
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