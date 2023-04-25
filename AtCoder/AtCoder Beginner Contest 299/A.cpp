// Problem: A - Treasure Chest
// Contest: AtCoder - Tokio Marine & Nichido Fire Insurance Programming Contest 2023（AtCoder Beginner Contest 299)
// URL: https://atcoder.jp/contests/abc299/tasks/abc299_a
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
char a[3];

inline void Solution()
{
    int n;
    scanf("%d", &n);
    int j = 0;
    for (int i = 0; i < n && j < 3; i++)
    {
        char b;
        scanf("%c", &b);
        if (b == '|' || b == '*')
        {
            a[j] = b;
            j++;
        }
    }
    if (a[1] == '*')
    {
        printf("in\n");
    }
    else
    {
        printf("out\n");
    }
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