// Problem: B. Squares and Cubes
// Contest: Codeforces Round 762 (Div. 3)
// URL: https://codeforces.com/contest/1619/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
// #include <stack>
#include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    vector<ll> a;
    ll max = 1e9 + 1, x;
    for (ll i = 1; i < 40000; i++)
    {
        x = i;
        for (int j = 0; j < 2; j++)
        {
            x *= i;
            if (x < max)
            {
                a.push_back(x);
            }
        }
    }
    set<int> s(a.begin(), a.end());
    a.assign(s.begin(), s.end());
    int n;
    scanf("%d", &n);
    // cin >> n;
    while (n--)
    {
        int y;
        scanf("%d", &y);
        int ans = upper_bound(a.begin(), a.end(), y) - a.begin();
        printf("%d\n", ans);
        // cout << upper_bound(a.begin(), a.end(), y) - a.begin() << '\n';
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