// Problem: A. Make it White
// Contest: Codeforces - Codeforces Round 923 (Div. 3)
// URL: https://codeforces.com/contest/1927/problem/A
// Memory Limit: 256 MB
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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d\n%s", &n, a);
    int ans1, ans2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'B')
        {
            ans1 = i;
            break;
        }
    }
    for (int i = n - 1; i > -1; i--)
    {
        if (a[i] == 'B')
        {
            ans2 = i;
            break;
        }
    }
    printf("%d\n", ans2 - ans1 + 1);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d\n", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}