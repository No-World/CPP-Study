// Problem: 天下归心
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/55416/I
// Memory Limit: 524288 MB
// Time Limit: 4000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
const int inf = 0x3f3f3f3f, N = 1e5 + 10;
int fa[N], wz[N];

inline int find(int x)
{
    if (fa[x] != x)
    {
        fa[x] = find(fa[x]);
    }
    return fa[x];
}

inline void merge(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x != y)
    {
        fa[x] = y;
    }
}

inline void Solution()
{
    int n, k, cc = 0;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &wz[i]);
        fa[i] = i;
        if (wz[i] == 1)
        {
            cc = i;
        }
    }
    while (k--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        merge(a, b);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!wz[i])
        {
            printf("0");
        }
        else if (find(i) == find(cc))
        {
            printf("%d", wz[i]);
        }
        else
        {
            printf("-1");
        }
        if (i == n)
        {
            printf("\n");
        }
        else
        {
            printf(" ");
        }
    }
    for (int i = 1; i <= n; i++)
    {
        wz[i] = 0, fa[i] = 0;
    }
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