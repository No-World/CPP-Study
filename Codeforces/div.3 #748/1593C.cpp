// Problem: C. Save More Mice
// Contest: Codeforces Round 748 (Div. 3)
// URL: https://codeforces.com/contest/1593/problem/C
// Memory Limit: 256 MB
// Time Limit: 4000 ms

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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 4e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + k);
    int cnt = 0, wz = 0;
    for (int i = k - 1; i > -1; i--)
    {
        wz += n - a[i];
        if (wz < n)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    printf("%d\n", cnt);
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