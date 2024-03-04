// Problem: B. Yet Another Coin Problem
// Contest: Codeforces Round 931 (Div. 2)
// URL: https://codeforces.com/contest/1934/problem/B
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
const int inf = 0x3f3f3f3f, N = 1e9 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[] = {1, 3, 6, 10, 15};

void Solution(int __T)
{
    // 注意数组大小
    int n, ans = 0, mn = inf, num1 = 0, num3 = 0;
    scanf("%d", &n);
    num1 = n % 3;
    num3 = n / 3;
    // printf("%d\n%d\n", num1, num3);
    if (num1)
    {
        if (num1 == 1)
        {
            mn = min(mn, 1 + num3 / 2 + num3 % 2);
            if (num3 > 2)
            {
                mn = min(mn, 1 + (num3 - 3) / 5 + (num3 - 3) % 5 / 2 + (num3 - 3) % 5 % 2);
            }
        }
        if (num1 == 2)
        {
            mn = min(mn, 2 + num3 / 5 + num3 % 5 / 2 + num3 % 5 % 2);
            if (num3 > 2)
            {
                mn = min(mn, 2 + (num3 - 3) / 5 + (num3 - 3) % 5 / 2 + (num3 - 3) % 5 % 2);
            }
            if (num3 > 5)
            {
                mn = min(mn, 2 + (num3 - 6) / 5 + (num3 - 6) % 5 / 2 + (num3 - 6) % 5 % 2);
            }
        }
    }
    else
    {
        mn = min(mn, num3 / 5 + num3 % 5 / 2 + num3 % 5 % 2);
    }
    printf("%d\n", mn);
    // printf("\n");
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