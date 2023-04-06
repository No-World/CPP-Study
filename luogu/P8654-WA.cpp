#include <cstdio>
#include <cstdlib>
using namespace std;

int fa[1010];

int find(int x)
{
    if (x = fa[x])
    {
        return x;
    }
    return fa[x] = find(fa[x]);
}

void merge(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x != y)
    {
        if (rand() % 2 == 0)
        {
            fa[y] = find(x);
        }
        else
        {
            fa[x] = find(y);
        }
    }
}

void intt(int n)
{
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }
}

int main()
{
    int m, n, k;
    scanf("%d%d%d", &m, &n, &k);
    int mn = m * n;
    intt(mn);
    while (k--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        merge(x, y);
    }
    for (int i = 1; i <= mn; i++)
    {
        find(i);
    }
    int ans = 0;
    for (int i = 1; i <= mn; i++)
    {
        if (fa[i] == i)
        {
            ans++;
            // printf("%d\n", i);
        }
    }
    printf("%d\n", ans);

    return 0;
}