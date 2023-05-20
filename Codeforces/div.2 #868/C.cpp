// Problem: C. Strongly Composite
// Contest: Codeforces - Codeforces Round 868 (Div. 2)
// URL: https://codeforces.com/contest/1823/problem/C
// Memory Limit: 256 MB
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

bool isprime[N];
void isPrime()
{
    for (int i = 0; i <= N; i++)
        isprime[i] = true;
    isprime[0] = isprime[1] = false;
    for (int i = 2; i <= N; i++)
    { // 从2开始往后筛
        if (isprime[i])
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                isprime[j] = false;
            }
        }
    }
}

inline void Solution()
{
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