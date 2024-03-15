// Problem: A. Entertainment in MAC
// Contest: Codeforces Round 932 (Div. 2)
// URL: https://codeforces.com/contest/1935/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
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
    string s, res;
    int n;
    cin >> n >> s;
    res = s;
    reverse(res.begin(), res.end());
    if (res < s)
    {
        n--;
        if (n % 2)
        {
            cout << res << s << '\n';
        }
        else
        {
            cout << res << '\n';
        }
    }
    else if (res > s)
    {
        if (n % 2)
        {
            cout << s << res << '\n';
        }
        else
        {
            cout << s << '\n';
        }
    }
    else
    {
        cout << s << '\n';
    }
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