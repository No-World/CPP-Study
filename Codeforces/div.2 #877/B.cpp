// Problem: B. Minimize Permutation Subarrays
// Contest: Codeforces - Codeforces Round 877 (Div. 2)
// URL: https://codeforces.com/contest/1838/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;

inline void Solution()
{
    int mx = 0, mx_n, num1, num2, mn, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x == 1)
        {
            num1 = i + 1;
        }
        else if (x == 2)
        {
            num2 = i + 1;
        }
        else if (mx < x)
        {
            mx = x, mx_n = i + 1;
        }
    }
    mn = min(num1, num2), mx = max(num1, num2);
    if (n <= 2)
    {
        printf("1 1\n");
    }
    else
    {
        if (mx_n < mn)
        {
            printf("%d %d\n", mx_n, mn);
        }
        else if (mx_n > mx)
        {
            printf("%d %d\n", mx_n, mx);
        }
        else
        {
            printf("%d %d\n", mx_n, mx_n);
        }
    }
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