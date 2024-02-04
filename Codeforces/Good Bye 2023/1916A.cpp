// Problem: A. 2023
// Contest: Codeforces - Good Bye 2023
// URL: https://codeforces.com/contest/1916/problem/A
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
// typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int n, k, ans = 2023, flag = 1;
    scanf("%d%d", &n, &k);
    while (n--)
    {
        int x;
        scanf("%d", &x);
        if (flag && ans % x == 0)
        {
            ans /= x;
        }
        else
        {
            flag = 0;
        }
    }
    if (!flag)
    {
        printf("NO");
    }
    else
    {
        printf("YES\n%d ", ans);
        while (--k)
        {
            printf("1 ");
        }
    }
    printf("\n");
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