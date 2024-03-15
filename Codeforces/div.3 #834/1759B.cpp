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
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<int, int> mp;

void Solution(int __T)
{
    // 注意数组大小
    mp.clear();
    int m, s, sum = 0, mx = 0;
    scanf("%d%d", &m, &s);
    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);
        mp[x]++;
        mx = max(mx, x);
    }
    for (auto it : mp)
    {
        if (it.second > 1)
        {
            printf("NO\n");
            return;
        }
    }
    for (int i = 1; sum < s || i < mx; i++)
    {
        if (!mp.count(i))
        {
            sum += i;
        }
    }
    if (sum > s)
    {
        printf("NO\n");
        return;
    }
    printf("YES\n");
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