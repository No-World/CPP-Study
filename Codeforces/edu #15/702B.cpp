// Problem: B. Powers of Two
// Contest: Educational Codeforces Round 15
// URL: https://codeforces.com/contest/702/problem/B
// Memory Limit: 256 MB
// Time Limit: 3000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<int, ll> mp;

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        mp[x]++;
    }
    ll two = 1, ans = 0;
    for (int i = 0; i < 32; i++)
    {
        two <<= 1;
        for (auto p : mp)
        {
            int temp = two - p.first;
            if (mp.find(temp) != mp.end())
            {
                ans += 1LL * mp[temp] * p.second;
                if (temp == p.first)
                {
                    ans -= p.second;
                }
            }
        }
    }
    printf("%lld\n", ans / 2);
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