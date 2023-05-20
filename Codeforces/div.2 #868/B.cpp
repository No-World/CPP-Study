// Problem: B. Sort with Step
// Contest: Codeforces - Codeforces Round 868 (Div. 2)
// URL: https://codeforces.com/contest/1823/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 2e5 + 10;
// const ll INF = __LONG_LONG_MAX__;

struct B
{
    int x, y;
} a[N];

bool cmp(B x, B y)
{
    return x.y < y.y;
}

inline void Solution()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i].y);
        a[i].x = i;
    }
    int ans = 0;
    sort(a + 1, a + n + 1, cmp);
    // for(int i=1;i<=n;i++)cout<<a[i].z<<' ';
    //     cout<<endl;
    for (int i = 1; i <= n; i++)
    {
        int t = abs(a[i].x - i);
        if (t % k != 0)
        {
            // cout<<a[i].z<<endl;
            ans++;
        }
    }
    // cout<<ans;
    if (ans == 0)
    {
        printf("0\n");
    }
    else if (ans == 2)
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }
}

int main(int argc, char const *argv[])
{
    int T = 1;
    scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}