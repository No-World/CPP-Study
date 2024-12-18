// Problem: Tokitsukaze and Bracelet
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67742/A
// Memory Limit: 524288 MB
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

int jtplus(int x)
{
    switch (x)
    {
    case 34 ... 40:
        return 1;
    case 45:
        return 2;
    default:
        return 0;
    }
}

void Solution(int __T)
{
    // 注意数组大小
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n", (a - 100) / 50 + jtplus(b) + jtplus(c));
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