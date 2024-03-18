// Problem: A. Special Characters
// Contest: Educational Codeforces Round 163 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1948/problem/A
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
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

// 根据题目条件，任意一个偶数n都能由以下字符串的倍数组成，0<n<=50，因此0<length<=150，满足length长度小于200
char s[] = "AAB";

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    // 当n不为偶数时，无法构造
    if (n % 2)
    {
        printf("NO\n");
        return;
    }
    printf("YES\n");
    // 构造s的n/2倍
    for (int i = 0; i < n; i += 2)
    {
        printf("%s", s);
    }
    printf("\n");
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