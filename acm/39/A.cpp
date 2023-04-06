#include <queue>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;
const int N = 1010, INF = 0x3f3f3f3f;
int n, m, jx, jy, fx, fy, step1[N][N], step2[N][N];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char a[N][N];
struct node
{
    int x, y;
    node(int xx = 0, int yy = 0)
    {
        x = xx;
        y = yy;
    }
};
vector<node> csm;

void bfs1()
{
    memset(step1, 0x3f, sizeof(step1));
    queue<node> q;
    q.push(node(fx, fy));
    step1[fx][fy] = 0;
    while (!q.empty())
    {
        node f = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if (a[nx][ny] != '#' && step1[nx][ny] == INF)
                {
                    q.push(node(nx, ny));
                    step1[nx][ny] = step1[f.x][f.y] + 1;
                }
            }
        }
    }
}

int bfs2()
{
    memset(step2, 0x3f, sizeof(step2));
    queue<node> q;
    q.push(node(jx, jy));
    step2[jx][jy] = 0;
    while (!q.empty())
    {
        node f = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m)
            {
                if (a[nx][ny] != '#' && step2[nx][ny] == INF && step2[f.x][f.y] + 1 < step1[nx][ny])
                {
                    q.push(node(nx, ny));
                    step2[nx][ny] = step2[f.x][f.y] + 1;
                }
            }
            else
            {
                return step2[nx][ny] = step2[f.x][f.y] + 1;
            }
        }
    }
    return -1;
}

int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'F')
            {
                fx = i;
                fy = j;
            }
            if (a[i][j] == 'J')
            {
                jx = i;
                jy = j;
            }
        }
    }
    bfs1();
    int ans = bfs2();
    if (ans == -1)
    {
        printf("IMPOSSIBLE\n");
    }
    else
    {
        printf("%d\n", ans);
    }
    return 0;
}