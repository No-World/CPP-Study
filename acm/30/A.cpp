#include <cstdio>
using namespace std;
int fa[1010];
int find(int a)
{
    if (fa[a] == a)
        return a;
    return fa[a] = find(fa[a]);
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        fa[b] = a;
    }
}

void intt(int n)
{
    for (int i = 1; i < n; i++)
    {
        fa[i] = i;
    }
}

int main()
{
    while (1)
    {
        intt(1000);
        int n, m, ans = 0;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        scanf("%d", &m);
        while (m--)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            merge(a, b);
        }
        for (int i = 1; i <= n; i++)
        {
            if (i == fa[i])
            {
                ans++;
            }
        }
        printf("%d\n", ans - 1);
    }

    return 0;
}