#include <cstdio>
using namespace std;

struct don
{
    long long x, y, z;
} d[1000];

int fa[1010];

int root(int a)
{
    if (fa[a] == a)
        return a;
    return fa[a] = root(fa[a]);
}

void Fa(int a, int b)
{
    a = root(a);
    b = root(b);
    if (a != b)
        fa[b] = a;
}

void intt()
{
    for (int i = 0; i < 1002; i++)
        fa[i] = i;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        intt();
        long long n, h, r;
        scanf("%lld%lld%lld", &n, &h, &r);
        for (int i = 1; i <= n; i++)
        {
            scanf("%lld%lld%lld", &d[i].x, &d[i].y, &d[i].z);
            if (d[i].z <= r)
                Fa(i, 0);
            if (d[i].z >= h - r)
                Fa(i, n + 1);
        }
        for (int i = 1; i <= n; i++)
            for (int j = i; j <= n; j++)
                if ((d[i].x - d[j].x) * (d[i].x - d[j].x) + (d[i].y - d[j].y) * (d[i].y - d[j].y) + (d[i].z - d[j].z) * (d[i].z - d[j].z) <= 4 * r * r)
                    Fa(i, j);

        if (root(0) == root(n + 1))
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}