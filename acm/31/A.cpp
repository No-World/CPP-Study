#include <cstdio>
using namespace std;
int fa[5010];

int find(int x)
{
    if (x == fa[x])
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
        fa[x] = find(y);
    }
}

int main()
{
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }
    while (m--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        merge(x, y);
    }
    for (int i = 1; i <= n; i++)
    {
        find(i);
    }
    while (p--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (fa[x] == fa[y])
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    
    return 0;
}