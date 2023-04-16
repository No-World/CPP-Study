// Problem: C. Constructive Problem
// Contest: Codeforces - Codeforces Round 866 (Div. 2)
// URL: https://codeforces.com/contest/1820/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
int a[N], bucket[N];

inline bool Solution()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
        if (a[i] < N)
        {
            bucket[a[i]]++;
        }
    }
    int mex = 0;
    for (int i = 0; i <= n + 1; ++i)
    {
        if (!bucket[i])
        {
            mex = i;
            break;
        }
    }
    int l = 0, r = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == mex + 1)
        {
            l = (l == 0) ? i : l, r = i;
        }
    }
    if (!l)
    {
        bool isOK = 0;
        for (int i = 1; i <= n; ++i)
        {
            if ((a[i] < N && bucket[a[i]] > 1) || a[i] > mex)
            {
                isOK = 1;
            }
        }
        for (int i = 1; i <= n; ++i)
        {
            if (a[i] < N)
            {
                bucket[a[i]]--;
            }
        }
        return isOK;
    }
    for (int i = l; i <= r; ++i)
        if (a[i] < N)
            bucket[a[i]]--;
    bucket[mex] = 1;
    int mex1 = 0;
    for (int i = 0; i <= n + 2; ++i)
        if (!bucket[i])
        {
            mex1 = i;
            break;
        }
    for (int i = 1; i < l; ++i)
    {
        if (a[i] < N)
        {
            bucket[a[i]]--;
        }
    }
    for (int i = r + 1; i <= n; ++i)
    {
        if (a[i] < N)
        {
            bucket[a[i]]--;
        }
    }
    bucket[mex] = 0;
    return mex1 == mex + 1;
}

int main(int argc, char const *argv[])
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        if (Solution())
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}