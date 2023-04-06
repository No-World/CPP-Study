#include <queue>
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 10, INF = 0x3f3f3f3f;
int sx, sy, ex, ey, step[10][10], dx[] = {1, 1, -1, -1, 2, 2, -2, -2}, dy[] = {2, -2, 2, -2, 1, -1, 1, -1};

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
    step[sx][sy] = 0;
    while (!q.empty())
    {
        node f = q.front();
        q.pop();
        if (f.x == ex && f.y == ey)
        {
            return;
        }
        for (int i = 0; i < 8; i++)
        {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8 && step[nx][ny] == INF)
            {
                q.push(node(nx, ny));
                step[nx][ny] = step[f.x][f.y] + 1;
            }
        }
    }
}

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        sx = a[0] - 'a' + 1;
        sy = a[1] - '0';
        ex = b[0] - 'a' + 1;
        ey = b[1] - '0';
        bfs();
        printf("To get from %s to %s takes %d knight moves.\n", a.c_str(), b.c_str(), step[ex][ey]);
    }
    return 0;
}