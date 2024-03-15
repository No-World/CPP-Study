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
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    ll n, m, num2 = 0, num5 = 0;
    scanf("%lld%lld", &n, &m);
    ll n1 = n;
    while (!(n1 % 2))
    {
        num2++;
        n1 /= 2;
    }
    n1 = n;
    while (!(n1 % 5))
    {
        num5++;
        n1 /= 5;
    }
    ll k = 1;
    for (int i = 0; i < num2 - num5 && k * 5 < m; i++)
    {
        k *= 5;
        // printf("2 %d %lld\n", i, k);
    }
    for (int i = 0; i < num5 - num2 && k * 2 < m; i++)
    {
        k <<= 1;
        // printf("5 %d %lld\n", i, k);
    }
    while (k * 10 < m)
    {
        k *= 10;
        // printf("%lld\n", k);
    }
    printf("%lld\n", (m - m % k) * n);
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