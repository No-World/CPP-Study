// Problem: E - Kth Takoyaki Set
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_e
// Memory Limit: 1024 MB
// Time Limit: 3000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
#include <queue>
#include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;
priority_queue<long long, deque<long long>, greater<long long>> q;
map<long long, bool> m;
vector<long long> v;

inline void Solution()
{
    int n, k;
    scanf("%d%d", &n, &k);

    for (int i = 1; i <= n; i++)
    {
        long long x;
        scanf("%lld", &x);
        if (!m[x])
        {
            m[x] = true;
            q.push(x);
            v.push_back(x);
        }
    }
    for (int i = 1; i <= k - 1; i++)
    {
        long long x = q.top();
        q.pop();
        for (auto y : v)
        {
            if (!m[x + y])
            {
                m[x + y] = true;
                q.push(x + y);
            }
        }
    }
    printf("%lld\n", q.top());
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}