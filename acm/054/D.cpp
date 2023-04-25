// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;

inline void Solution()
{
    int n, m, ans = 0, t = 0;
    scanf("%d%d", &n, &m);
    while (m > n)
    {
        n <<= 1;
        t++;
        ans++;
    }
    n = n - m;
    while (n && t > 0)
    {
        if (n % 2)
        {
            ans++;
        }
        n /= 2;
        t--;
    }
    ans += n;
    printf("%d\n", ans);
}

int main(int argc, char const *argv[])
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}