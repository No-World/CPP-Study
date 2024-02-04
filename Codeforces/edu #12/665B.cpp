// Problem: B. Shopping
// Contest: Educational Codeforces Round 12
// URL: https://codeforces.com/contest/665/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
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
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    vector<int> a(k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
    }
    int t = m * n, ans = 0;
    while (t--)
    {
        int x;
        scanf("%d", &x);
        int pos = -1;
        for (int i = 0; i < k; i++)
        {
            if (a[i] == x)
            {
                pos = i;
                break;
            }
        }
        ans += pos + 1;
        a.erase(a.begin() + pos);
        a.insert(a.begin(), x);
    }
    printf("%d\n", ans);
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