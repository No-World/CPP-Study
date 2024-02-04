// Problem: C. Wrong Addition
// Contest: Codeforces Round 762 (Div. 3)
// URL: https://codeforces.com/contest/1619/problem/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    ll a, s, x, y, b = 0, p = 1;
    scanf("%lld%lld", &a, &s);
    while (a > 0)
    {
        x = a % 10;
        y = s % 10;
        if (y < x)
        {
            s /= 10;
            y += s % 10 * 10;
        }
        if (x > y or (y - x) > 9)
        {
            printf("-1\n");
            return;
        }
        b += p * (y - x);
        a /= 10, s /= 10, p *= 10;
    }
    b += p * s;
    printf("%lld\n", b);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}