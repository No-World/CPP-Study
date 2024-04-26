// Problem: A. Nene's Game
// Contest: Codeforces - Codeforces Round 939 (Div. 2)
// URL: https://codeforces.com/contest/1956/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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

int b[N];

void Solution(int __T)
{
    // 注意数组大小
    int k, q, mn = inf;
    scanf("%d %d", &k, &q);
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &b[i]);
        mn = min(mn, b[i] - 1);
    }
    int x;
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &x);
        printf("%d ", min(x, mn));
    }
    printf("\n");
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