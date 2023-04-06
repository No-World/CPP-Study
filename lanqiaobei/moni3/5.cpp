#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int N = 35, M = 65;

int n = 30, m = 60;
char g[N][M];

int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int dfs(int x, int y)
{
    int cnt = 1;
    g[x][y] = '0';

    for (int d = 0; d < 4; d++)
    {
        int a = x + dx[d], b = y + dy[d];
        if (a <= n && a >= 1 && b <= m && b >= 1 && g[a][b] == '1')
        {
            cnt += dfs(a, b);
        }
    }

    return cnt;
}

int main()
{

    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> g[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (g[i][j] == '1')
            {
                res = max(res, dfs(i, j));
            }
        }
    }

    cout << res << "\n";
    return 0;
}