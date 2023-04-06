#include <cstdio>
#include <iostream>
using namespace std;
int fa[1010];
int find(int x)
{
    if (fa[x] == x)
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
    cin >> n >> m;
    for (int i = 1; i <= 2 * n; i++)
    {
        fa[i] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        char c;
        cin >> a >> b >> c;
        if (c == 'T')
        {
            if (find(a) == find(b + n))
            {
                printf("%d\n", i);
            }
            else
            {
                merge(a, b);
                merge(a + n, b + n);
            }
        }
        else
        {
            if (find(a) == find(b))
            {
                printf("%d\n", i);
            }
            else
            {
                merge(a, b + n);
                merge(b, a + n);
            }
        }
    }
    return 0;
}