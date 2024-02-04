// Problem: 背单词
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/73810/F
// Memory Limit: 524288 MB
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
typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    ll n, m;
    scanf("%lld%lld", &n, &m);
    ll tot = m, next = m, cnt = 1;
    while (tot < n && next != 1)
    {
        cnt++;
        if (next % 2 == 1)
        {
            next *= 3;
            next++;
        }
        else
        {
            next /= 2;
        }
        tot += next;
    }
    if (next == 1)
    {
        n -= tot;
        cnt += n / 7 * 3;
        n %= 7;
        if (n > 4)
        {
            cnt += 2;
        }
        else if (n > 0)
        {
            cnt++;
        }
    }
    printf("%lld\n", cnt);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}