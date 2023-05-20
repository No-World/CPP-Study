// Problem: B - chess960
// Contest: AtCoder - AtCoder Beginner Contest 297
// URL: https://atcoder.jp/contests/abc297/tasks/abc297_b
// Memory Limit: 1024 MB
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
    string s;
    cin >> s;
    int len = s.length();
    int l, r;
    bool check = 0;
    for (int i = 0; i < len; i++)
    {
        if (check && s[i] == 'B')
        {
            r = i + 1;
        }
        if (s[i] == 'B' && check == 0)
        {
            l = i + 1;
            check = 1;
        }
    }
    if (r % 2 == l % 2)
    {
        cout << "No" << '\n';
        return;
    }
    int a, b, c;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'R')
        {
            a = i + 1;
            break;
        }
    }
    for (int i = a - 1; i < len; i++)
    {
        if (s[i] == 'R')
        {
            b = i + 1;
        }
        if (s[i] == 'K')
        {
            c = i + 1;
        }
    }
    if (a < c && c < b)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
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