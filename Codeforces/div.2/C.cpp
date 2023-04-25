// Problem: C. Tear It Apart
// Contest: Codeforces - Educational Codeforces Round 147 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1821/problem/C
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
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;
int zm[30];
char a[N];
bool b[N];

inline void Solution()
{
    scanf("%s", a);
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        zm[a[i] - 'a'];
    }
    int mx = 0, l;
    for (int i = 0; i < 26; i++)
    {
        if (zm[i] > mx)
        {
            l = i;
            mx = zm[i];
        }
    }
    l += 'a';
    for (int i = 0; i < n; i++)
    {
        if (b[i] == l)
        {
            b[i] = true;
        }
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