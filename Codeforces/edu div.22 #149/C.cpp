// Problem: C. Best Binary String
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1837/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
const int inf = 0x3f3f3f3f, N = 3e5 + 10;
// const ll INF = __LONG_LONG_MAX__;

char a[N] = {'0'};

inline void Solution()
{
    scanf("%s", a + 1);
    int len = strlen(a + 1);
    for (int i = 1; i <= len; i++)
    {
        if (a[i] == '?')
        {
            a[i] = a[i - 1];
        }
    }
    printf("%s\n", a + 1);
    for (int i = 1; i <= len; i++)
    {
        a[i] = 0;
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