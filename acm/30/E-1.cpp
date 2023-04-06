#include <cstdio>
#include <iostream>
using namespace std;
int fa[200010], kg[200010][2], a[200010];
int find(int a)
{
    if (fa[a] == a)
    {
        return a;
    }
    return fa[a] = find(fa[a]);
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    fa[b] = a;
}

void intt(int n)
{
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
        a[i] = 0;
        kg[i][0] = 0;
        kg[i][1] = 0;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        intt(200010);
        int n, m;
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= m; i++)
        {
            int z;
            scanf("%d", &z);
            for (int j = 1; j <= z; j++)
            {
                int x;
                scanf("%d", &x);
                if (!kg[x][0])
                {
                    kg[x][0] = i;
                }
                else
                {
                    kg[x][1] = i;
                }
            }
        }
        bool flag = true;
        for (int i = 1; i <= n; i++)
        {
            if (a[i])
            {
                if (find(kg[i][0]) == find(kg[i][1] + n))
                {
                    flag = false;
                }
                else
                {
                    merge(kg[i][0], kg[i][1]);
                    merge(kg[i][0] + n, kg[i][1] + n);
                }
            }
            else
            {
                if (find(kg[i][0]) == find(kg[i][1]))
                {
                    flag = false;
                }
                else
                {
                    merge(kg[i][0], kg[i][1] + n);
                    merge(kg[i][0] + n, kg[i][1]);
                }
            }
        }

        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}