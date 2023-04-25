// Problem: C. Parity Shuffle Sorting
// Contest: Codeforces - Codeforces Round 821 (Div. 2)
// URL: https://codeforces.com/contest/1733/problem/C
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
// #include <map>
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e5 + 10;

int a[N];

inline void Solution()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    if (n == 1)
    {
        printf("0\n");
        return;
    }

    if ((a[1] + a[n]) % 2 != 0)
        a[n] = a[0];
    else
        a[1] = a[n];
    printf("%d\n", n - 1);
    printf("1 %d\n", n);
    for (int i = 2; i < n; i++)
    {
        if ((a[1] + a[i]) % 2 != 0)
            printf("1 %d\n", i);
        else
            printf("%d %d\n", i, n);
    }
}

int main(int argc, char const *argv[])
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}