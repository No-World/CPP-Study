// Problem: C. Rudolf and the Ugly String
// Contest: Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/contest/1941/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
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
using namespace std;
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int ans = 0, n;
    string s, s0 = "mapie", s1 = "map", s2 = "pie";
    cin >> n >> s;
    int x = 0, it = -inf;

    while (it != string::npos)
    {
        if (it != -inf)
        {
            s[it + 2] = 0;
            ans++;
            x = it + 3;
        }
        it = s.find(s0, x);
    }
    x = 0, it = -inf;
    while (it != string::npos)
    {
        if (it != -inf)
        {
            s[it + 1] = 0;
            ans++;
            x = it + 1;
        }
        it = s.find(s1, x);
    }
    x = 0, it = -inf;
    while (it != string::npos)
    {
        if (it != -inf)
        {
            s[it + 1] = 0;
            ans++;
            x = it + 1;
        }
        it = s.find(s2, x);
    }
    cout << ans << '\n';
    // cout << s << '\n';
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}