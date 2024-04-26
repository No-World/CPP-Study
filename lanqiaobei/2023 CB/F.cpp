// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N][N], dx[] = {0, 0, 1, -1}, dy[] = {-1, 1, 0, 0}, n, m, cnt;
bool b[N][N];
char c[N][N];

// debug a
void vis()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// 初始化b
void initb()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = 0;
        }
    }
}

// 染色
void dfs1(int x, int y)
{
    a[x][y] = cnt, b[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i], yy = y + dy[i];
        if (xx > -1 && yy > -1 && xx < n && yy < m && a[xx][yy] == 1 && !b[xx][yy])
        {
            dfs1(xx, yy);
        }
    }
}

// 判断
bool dfs2(int x, int y)
{
    if (!x || !y || x == n - 1 || y == m - 1)
    {
        return 1;
    }
    b[x][y] = 1;
    // 遍历格子周围的八个格子
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            int xx = x + i;
            int yy = y + j;
            // 搜索该格子周围的八格是否存在海水
            if (xx > -1 && xx < m && yy > -1 && yy < n)
            {
                if (!a[xx][yy] && !b[xx][yy])
                {
                    if (dfs2(xx, yy))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void Solution(int __T)
{
    // 注意数组大小
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", c[i]);
        for (int j = 0; j < m; j++)
        {
            a[i][j] = c[i][j] - '0';
        }
    }
    // vis();
    int res = 0;
    cnt = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                initb();
                dfs1(i, j);
                // vis();
                initb();
                if (dfs2(i, j))
                {
                    res++;
                }
                cnt++;
            }
        }
    }
    printf("%d\n", res);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}