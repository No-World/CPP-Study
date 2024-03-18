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
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int n;
char a[3][N];
bool b[3][N];

// 遍历两行点的路，注意要把走过的地方return防止重复走路
void dfs(int x, int y)
{
    // 走到走过的地方时
    if (b[x][y] || b[1][n - 1])
    {
        return;
    }
    // 否则标记这里是走过的地方
    b[x][y] = 1;
    // 如果这里是终点
    if (x == 1 && y == n - 1)
    {
        return;
    }
    // 向上或者向下走
    if (x == 0 && a[1][y] == '>')
    {
        dfs(1, y + 1);
    }
    else if (x == 1 && a[0][y] == '>')
    {
        dfs(0, y + 1);
    }
    // 向右走
    if (a[x][y + 1] == '>')
    {
        dfs(x, y + 2);
    }
}

void Solution(int __T)
{
    // 注意数组大小
    scanf("%d", &n);
    for (int i = 0; i < 2; i++)
    {
        scanf("%s", &a[i]);
    }
    dfs(0, 0);
    if (b[1][n - 1])
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = 0;
        }
    }
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