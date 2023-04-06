#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct yx
{
    int a, t, b;
} h[5010];

bool cmp(const yx &x, const yx &y)
{
    return x.b < y.b;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d%d", &h[i].a, &h[i].t, &h[i].b);
    }
    stable_sort(h + 1, h + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", h[i].a, h[i].t, h[i].b);
    }

    return 0;
}
