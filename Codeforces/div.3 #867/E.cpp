// Problem: E. Making Anti-Palindromes
// Contest: Codeforces - Codeforces Round 867 (Div. 3)
// URL: https://codeforces.com/contest/1822/problem/E
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
char s[N];
int a[26], b[26];
inline void Solution()
{
    int n;
    scanf("%d%s", &n, s + 1);

    if (n % 2 == 1)
    {
        printf("-1\n");
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            a[s[i] - 'a']++;
            a[s[n - i + 1] - 'a']++;
            if (s[i] == s[n - i + 1])
            {
                b[s[i] - 'a']++;
            }
        }
        int mx = 0, sum = 0, cnt = n / 2;
        for (int i = 0; i < 26; i++)
        {
            mx = max(mx, a[i]);
            sum += b[i];
        }
        if (mx > n / 2)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", (sum + 1) / 2);
        }
    }
    for (int i = 0; i < 26; i++)
    {
        a[i] = b[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        s[i] = 0;
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