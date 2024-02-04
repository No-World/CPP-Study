// Problem: B. Make it Divisible by 25
// Contest: Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
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

map<int, int> mp;

void Solution(int __T)
{
    // 注意数组大小
    ll n;
    scanf("%lld", &n);
    mp.clear();
    for (int i = 1; n; i++)
    {
        ll x = n % 10;
        if ((x == 0 || x == 5) && mp[0])
        {
            printf("%d\n", i - 2);
            return;
        }
        else if ((x == 2 || x == 7) && mp[5])
        {
            printf("%d\n", i - 2);
            return;
        }
        mp[x]++;
        n /= 10;
    }
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