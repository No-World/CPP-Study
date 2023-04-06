#include <cstdio>
using namespace std;
int fa[100010], fs[100010];

int find(int x)
{
    if (fa[x] != x)
    {
        int t = fa[x];
        fa[x] = find(fa[x]);
        fs[x] += fs[t];
    }
    return fa[x];
}

void merge(int x, int y, int s)
{
    int fx = find(x);
    int fy = find(y);
    if (fx != fy)
    {
        fa[fx] = fy;
        fs[fx] = -fs[x] + fs[y] + s;
    }
}

int main()
{
    int n, m, q;
    scanf("%d%d%d", &n, &m, &q);
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }
    while (m--)
    {
        int x, y, s;
        scanf("%d%d%d", &x, &y, &s);
        merge(x, y, s);
    }
    while (q--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (find(x) != find(y))
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", fs[x] - fs[y]);
        }
    }

    return 0;
}