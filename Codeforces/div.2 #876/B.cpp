// Problem: B. Lamps
// Contest: Codeforces - Codeforces Round 876 (Div. 2)
// URL: https://codeforces.com/contest/1839/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
// #include <cstring>
#include <algorithm>
// #include <cmath>
#include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e5 + 10;
// const ll INF = __LONG_LONG_MAX__;
// 解释Solution函数代码
inline void Solution()
{
    int n, x, y;
    scanf("%d", &n);
    // 优先队列，大顶堆，每个位置存储该位置的灯的亮度，每次取出最大的亮度
    priority_queue<int> q[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &x, &y);
        q[x].push(y);
    }
    long long res = 0;
    for (int i = 1; i <= n; i++)
    {
        int j = 0;
        // 每次取出最大的亮度
        while (q[i].size() && j < i)
        {
            res += q[i].top();
            q[i].pop();
            j++;
        }
    }
    printf("%lld\n", res);
}

int main(int argc, char const *argv[])
{
    int T = 1;
    scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}