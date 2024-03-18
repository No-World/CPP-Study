// Problem: 11:走迷宫
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/11/
// Memory Limit: 64 MB
// Time Limit: 1000 ms

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
const int inf = 0x3f3f3f3f, N = 1e2 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int n, m, p[N * N], q[N * N], ans[N][N];
char a[N][N];
int xx[5] = {0, 1, -1, 0, 0};
int yy[5] = {0, 0, 0, 1, -1};
int bfs()
{
    a[1][1] = '#';
    ans[1][1] = 1;
    int head = 1;
    int tail = 1;
    p[1] = 1;
    q[1] = 1;
    while (head <= tail)
    {
        for (int i = 1; i <= 4; i++)
        {
            int h = p[head] + xx[i];
            int l = q[head] + yy[i];
            if (a[h][l] != '#' && h >= 1 && l >= 1 && h <= n && l <= m)
            {
                a[h][l] = '#';
                tail++;
                p[tail] = h;
                q[tail] = l;
                ans[h][l] = ans[p[head]][q[head]] + 1;
                if (h == n && l == m)
                {
                    return ans[h][l];
                }
            }
        }
        head++;
    }
}

void Solution(int __T)
{
    // 注意数组大小
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        getchar();
        for (int j = 1; j <= m; j++)
        {
            scanf("%c", &a[i][j]);
        }
    }
    printf("%d\n", bfs());
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}