// Problem: A - N-choice question
// Contest: AtCoder - ユニークビジョンプログラミングコンテスト2023 春 (AtCoder Beginner Contest 300)
// URL: https://atcoder.jp/contests/abc300/tasks/abc300_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    int ans;
    for (int i = 0; i < n; i++)
    {
        int sum;
        scanf("%d", &sum);
        if (sum == a + b)
        {
            ans = i;
        }
    }
    printf("%d\n", ans + 1);
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