// Problem: 贪吃的Diana
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/53284/B
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
// #include <cstring>
// #include <algorithm>
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <map>
// #include <set>
// #include <cmath>
using namespace std;
typedef long long ll;
int a[100010];
int main()
{
    int n, k, s;
    scanf("%d%d%d", &n, &k, &s);
    while (s--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        a[x] += y;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < k)
        {
            ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}