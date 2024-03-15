// Problem: B. Informatics in MAC
// Contest: Codeforces Round 932 (Div. 2)
// URL: https://codeforces.com/contest/1935/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
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

map<int, int> remp, mp;
int a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    mp[-1] = remp[-1] = 1;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        remp[a[i]]++;
    }
    for (int i = 1; i < n; i++)
    {
        remp[a[i]]--;
        mp[a[i]]++;
        if (!remp[a[i]])
        {
            remp.erase(a[i]);
        }
        int l = -1, r = N, mid, j;
        for (j = 0; j < N && mp.count(j) && remp.count(j); j++)
        {
        }
        if (mp.count(j) == remp.count(j))
        {
            printf("2\n1 %d\n%d %d\n", i, i + 1, n);
            return;
        }
        // while (l + 1 < r)
        // {
        //     mid = (l + r) >> 1;
        //     if (mp.count(mid) && remp.count(mid))
        //     {
        //         l = mid;
        //     }
        //     else
        //     {
        //         r = mid;
        //     }
        // }
        // if (mp.count(r) == remp.count(r))
        // {
        //     printf("2\n1 %d\n%d %d\n", i, i + 1, n);
        //     return;
        // }
    }
    printf("-1\n");
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
        mp.clear(), remp.clear();
    }
    return 0;
}