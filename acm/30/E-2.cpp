#include <iostream>
using namespace std;
int fa[200010], a[200010], kg[200010][2];
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
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= 2 * m; i++)
        {
            fa[i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            kg[i][0] = 0, kg[i][1] = 0;
            scanf("%d", &a[i]);
        }
        for (int i = 1; i <= m; i++)
        {
            int count_s;
            scanf("%d", &count_s);
            for (int j = 1; j <= count_s; j++)
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
                if (find(kg[i][0]) == find(kg[i][1] + m))
                {
                    flag = false;
                }
                else
                {
                    merge(kg[i][0], kg[i][1]);
                    merge(kg[i][0] + m, kg[i][1] + m);
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
                    merge(kg[i][0], kg[i][1] + m);
                    merge(kg[i][0] + m, kg[i][1]);
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
}