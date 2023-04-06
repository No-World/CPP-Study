#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;

const int N = 110;
char a[N][N];
int step[N][N], sx, sy, ex, ey, n, dx[] = {-1, 1, 0, 0}, dy[] = {0, 0, -1, 1};

struct node
{
    int x, y;
    node(int xx = 0, int yy = 0)
    {
        x = xx;
        y = yy;
    }
};

void bfs()
{
    memset(step, 0x3f, sizeof(step));
    queue<node> q;
    q.push(node(sx, sy));
    step[sx][sy] = 1;
    while (!q.empty())
    {
        node f = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < n)
                if (a[nx][ny] != '#' && step[nx][ny] == 0x3f3f3f3f)
                {
                    q.push(node(nx, ny));
                    step[nx][ny] = step[f.x][f.y] + 1;
                }
        }
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
        }
        scanf("%d%d%d%d", &sx, &sy, &ex, &ey);
        bfs();
        if (step[ex][ey] == 0x3f3f3f3f)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}