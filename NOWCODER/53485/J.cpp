// Problem: 三门问题
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/53485/J
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
// #include <cstring>
#include <algorithm>
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <map>
// #include <set>
// #include <cmath>
using namespace std;
// typedef long long ll;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ans1 = n - 1, ans2 = n * (n - 2), ys = __gcd(ans1, ans2);
        printf("%d %d\n", ans1 / ys, ans2 / ys);
    }

    return 0;
}