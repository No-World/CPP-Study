// Problem: B. Shifts and Sorting
// Contest: Educational Codeforces Round 165 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1969/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
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
using namespace std;
typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char s[N];

void Solution(int __T)
{
    // 注意数组大小
    scanf("%s", s);
    ll len = strlen(s), len1 = 0, ans = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '1')
        {
            len1++;
        }
        else
        {
            ans += (len1 ? len1 + 1 : 0);
        }
        // printf("%d %d\n", i, ans);
    }
    printf("%lld\n", ans);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}