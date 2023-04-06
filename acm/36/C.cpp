#include <cstdio>
using namespace std;
int fa[150010];

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
        fa[x] = y;
    }
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n * 3; i++)
    {
        fa[i] = i;
    }
    int ans = 0;
    while (m--)
    {
        int s, x, y;
        scanf("%d%d%d", &s, &x, &y);
        if (x > n || y > n || (s == 2 && x == y))
        {
            ans++;
        }
        else if (s == 1)
        {
            if (find(x) == find(y + n) || find(x) == find(y + 2 * n))
            {
                ans++;
            }
            else
            {
                merge(x, y);
                merge(x + n, y + n);
                merge(x + 2 * n, y + 2 * n);
            }
        }
        else if (s == 2)
        {
            if (find(y) == find(x) || find(y) == find(x + 2 * n))
            {
                ans++;
            }
            else
            {
                merge(y + 2 * n, x);
                merge(y, x + n);
                merge(y + n, x + 2 * n);
            }
        }
    }
    printf("%d", ans);

    return 0;
}