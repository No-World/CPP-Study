// Problem: A. Elections
// Contest: Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int mx = max({a, b, c});
    if (a == b && a == mx || a == c && a == mx || b == c && b == mx)
    {
        printf("%d %d %d\n", (mx - a) != 0 ? (mx - a + 1) : 1, (mx - b) != 0 ? (mx - b + 1) : 1, (mx - c) != 0 ? (mx - c + 1) : 1);
    }
    else
    {
        printf("%d %d %d\n", (mx - a) != 0 ? (mx - a + 1) : 0, (mx - b) != 0 ? (mx - b + 1) : 0, (mx - c) != 0 ? (mx - c + 1) : 0);
    }
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