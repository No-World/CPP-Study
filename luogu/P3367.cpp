#include <cstdio>
using namespace std;
int fa[10010];

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
    fa[x] = y;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }
    while (m--)
    {
        int z, x, y;
        scanf("%d%d%d", &z, &x, &y);
        if (z == 1)
        {
            merge(x, y);
        }
        else
        {
            if (find(x) == find(y))
            {
                printf("Y\n");
            }
            else
            {
                printf("N\n");
            }
        }
    }

    return 0;
}