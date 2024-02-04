// Problem: A. Maximum Increase
// Contest: Educational Codeforces Round 15
// URL: https://codeforces.com/contest/702/problem/A
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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, ans = 1, mx = 1;
    scanf("%d%d", &n, &a[0]);
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > a[i - 1])
        {
            ans++;
            mx = max(ans, mx);
        }
        else
        {
            ans = 1;
        }
    }
    printf("%d\n", mx);
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