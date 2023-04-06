#include <cstdio>
#include <cstring>
using namespace std;

int n, sx, sy, ex, ey;
const int N = 110;
char a[N][N];
bool b[N][N];

void dfs(int x, int y)
{
    if (x < 0 || y < 0 || x >= n || y >= n)
    {
        return;
    }
    if (b[x][y])
    {
        return;
    }
    if (a[x][y] == '#')
    {
        return;
    }

    b[x][y] = true;
    if (x == ex && y == ey)
    {
        return;
    }

    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        memset(b, false, sizeof(b));
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
        }
        scanf("%d%d%d%d", &sx, &sy, &ex, &ey);
        dfs(sx, sy);
        if (b[ex][ey])
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