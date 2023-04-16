// Problem: 通关
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/55416/C
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

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
const int inf = 0x3f3f3f3f, N = 5e5 + 10;

struct GuanQia
{
    int v, h, n;
} a[N];

inline bool cmp(GuanQia x, GuanQia y)
{
    return x.v > y.v;
}

inline void Solution()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i].v);
        a[i].n = i;
    }
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i].h);
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i].v < a[i].h)
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i < n; i++)
    {
        printf("%d ", a[i].n);
    }
    printf("%d\n", a[n].n);
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