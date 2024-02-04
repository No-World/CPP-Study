// Problem: C. Grouping Increases
// Contest: Codeforces - Hello 2024
// URL: https://codeforces.com/contest/1919/problem/C
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
const int inf = 0x3f3f3f3f, N = 5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int n, numa = inf, numb = inf, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (numa >= x && numb >= x)
        {
            if (numa <= numb)
            {
                numa = x;
            }
            else
            {
                numb = x;
            }
        }
        else if (numa >= x)
        {
            numa = x;
        }
        else if (numb >= x)
        {
            numb = x;
        }
        else
        {
            ++cnt;
            if (numb <= numa)
            {
                numb = x;
            }
            else
            {
                numa = x;
            }
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