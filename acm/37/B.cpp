#include <cstdio>
#include <cstring>
using namespace std;

char mapp[10][10];
int n, k, sum;
bool vis[100];

void dfs(int m, int k) // k为所放棋子的数量
{

    if (k == 0) // 手上剩余棋子数等于0时摆放完毕，方案加一
    {
        sum++;
        return;
    }
    for (int i = m; i <= n; i++) // 层层搜，由于一层只能放一个棋子
    {
        for (int j = 1; j <= n; j++)
        {
            if (mapp[i][j] == '.' || vis[j])
            {
                continue;
            }
            vis[j] = true;        // 找到可放的位置，标记，再进行dfs
            dfs(i + 1, k - 1);    // 此时进行dfs的点为搜索下一层并且所放棋子数减1
            vis[j] = false;       // 标记该点
        }
    }
}

int main()
{
    while (scanf("%d%d", &n, &k) != EOF)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%s", mapp[i] + 1);
        }
        memset(vis, 0, sizeof(vis));
        sum = 0;
        dfs(1, k);
        printf("%d\n", sum);
    }
    return 0;
}
