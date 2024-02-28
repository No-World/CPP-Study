// Problem: C. Choose the Different Ones!
// Contest: Codeforces - Codeforces Round 923 (Div. 3)
// URL: https://codeforces.com/contest/1927/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 4e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

map<int, bool> a, b;

void Solution(int __T)
{
    // 注意数组大小
    a.clear(), b.clear();
    int n, m, k;
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        a[x] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);
        b[x] = 1;
    }
    int numa = 0, numb = 0, j = 1;
    for (int i = 1; i <= k; i++)
    {
        if (!(a[i] || b[i]))
        {
            printf("NO\n");
            return;
        }
        if (a[i] && !b[i])
        {
            numb++;
        }
        else if (!a[i] && b[i])
        {
            numa++;
        }
    }

    if (numa > k / 2 || numb > k / 2)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
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