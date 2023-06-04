// Problem: A. The Good Array
// Contest: Codeforces - Codeforces Round 876 (Div. 2)
// URL: https://codeforces.com/contest/1839/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
#include <cstring>
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
    double a, b, sum = 0;
    scanf("%lf%lf", &a, &b);
    for (int i = 2; i <= a; i++)
    {
        if ((a - i) / (i - 1) <= (b - 1))
        {
            sum = i;
            break;
        }
    }

    printf("%.0lf\n", sum);
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