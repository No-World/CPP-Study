// Problem: Tokitsukaze and Eliminate (easy)
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67742/E
// Memory Limit: 524288 MB
// Time Limit: 2000 ms

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
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N];
map<int, int> mp, cntmp;

void Solution(int __T)
{
    // 注意数组大小
    mp.clear();
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        mp[a[i]]++;
    }
    int ans = 0, size = mp.size();
    for (int i = n - 1; i > -1; i--)
    {
        cntmp[a[i]]++, mp[a[i]]--;
        if (!mp[a[i]])
        {
            mp.erase(a[i]);
        }
        if (cntmp.size() == size)
        {
            ans++;
            cntmp.clear();
            size = mp.size();
        }
    }
    printf("%d\n", ans);
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