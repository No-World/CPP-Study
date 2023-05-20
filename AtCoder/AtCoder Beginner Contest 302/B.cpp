// Problem: B - Find snuke
// Contest: AtCoder - TOYOTA MOTOR CORPORATION Programming Contest 2023#2 (AtCoder Beginner Contest 302)
// URL: https://atcoder.jp/contests/abc302/tasks/abc302_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

// #include <bits/stdc++.h>
#include <cstdio>
// #include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
// #include <stack>
// #include <set>
// #include <unordered_map>
// #include <cstdlib>
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e2 + 10;
// const ll INF = __LONG_LONG_MAX__;
int n, m;
typedef pair<int, int> PII;
char grid[N][N];
char word[10] = {'s', 'n', 'u', 'k', 'e'};

int dx[10] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[10] = {1, -1, 0, 0, -1, 1, 1, -1};
inline bool check(int x, int y)
{
    if (x >= 1 && x <= n && y >= 1 && y <= m)
        return true;
    else
        return false;
}

inline void dfs(int x, int y, vector<PII> path)
{

    for (int i = 0; i < 8; i++)
    {
        int nx = x, ny = y;
        int ok = 1;
        path.push_back({x, y});
        for (int j = 1; j < 5; j++)
        {
            nx += dy[i];
            ny += dx[i];

            if (grid[nx][ny] == word[j] && check(nx, ny))
            {
                path.push_back({nx, ny});
            }
            else
            {
                ok = 0;
                path.clear();
                break;
            }
        }
        if (ok == 1)
        {
            for (int i = 0; i < path.size(); i++)
                printf("%d %d\n", path[i].first, path[i].second);
            return;
        }
    }
}

inline void Solution()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%s", grid[i] + 1);

    vector<PII> path;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (grid[i][j] == 's')
                dfs(i, j, path);
}

int main(int argc, char const *argv[])
{
    int T = 1;
    // scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
    return 0;
}