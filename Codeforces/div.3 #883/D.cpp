// Problem: D. Rudolph and Christmas Tree
// Contest: Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/D
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
typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int n;
    db d, h;
    scanf("%d%lf%lf", &n, &d, &h);
    db H[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &H[i]);
    }
    sort(H, H + n);
    db sum = n;
    for (int i = 1; i < n; i++)
    {
        int x = H[i] - H[i - 1];
        if (x < h)
        {
            sum -= ((x - h) / h) * ((x - h) / h);
        }
    }
    printf("%lf\n", sum * d * h / 2);
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