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
#include <vector>
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

map<int, int> mp, remp;
int a[N], mex[N], remex[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, num = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        mp[a[i]]++;
        while (mp[num])
        {
            num++;
        }
        mex[i] = num;
    }
    num = 0;
    for (int i = n; i > 0; i--)
    {
        remp[a[i]]++;
        while (remp.count(num))
        {
            num++;
        }
        remex[i] = num;
    }
    for (int i = 1; i < n; i++)
    {
        if (remex[i + 1] == mex[i])
        {
            printf("2\n1 %d\n%d %d\n", i, i + 1, n);
            return;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        mex[i] = remex[i] = 0;
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