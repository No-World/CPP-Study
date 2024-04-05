// Problem: 太阳之华
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/76795/C
// Memory Limit: 1572864 MB
// Time Limit: 2000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
// #include <vector>
// #include <stack>
#include <set>
// #include <unordered_map>
// #include <cstdlib>
using namespace std;
// typedef long long ll;
// typedef __int128 lll;
// typedef double db;
typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 2e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char a[N][N];
bool b[N][N];
int fx[] = {0, 1, 0, -1}, fy[] = {1, 0, -1, 0}, n, m;
set<PII> st;

// 遍历红色连通块
void dfs(int x, int y)
{
    if (b[x][y])
    {
        return;
    }
    b[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int xx = x + fx[i], yy = y + fy[i];
        if (xx < 1 || xx > n || yy < 1 || yy > m)
        {
            continue;
        }
        else if (a[xx][yy] != '#')
        {
            st.insert({xx, yy});
            // printf("x:%d y:%d\n", xx, yy);
            continue;
        }
        dfs(xx, yy);
    }
}

void Solution(int __T)
{
    // 注意数组大小
    int bnum = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", a[i] + 1);
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] != '#')
            {
                bnum++;
            }
            b[i][j] = 0;
        }
    }
    // printf("blue:%d\n", bnum);
    if (bnum == 0)
    {
        printf("Red\n");
        return;
    }
    else if (bnum == n * m)
    {
        printf("Blue\n");
        return;
    }
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == '#' && !b[i][j])
            {
                st.clear();
                dfs(i, j);
                // printf("%d %d %d %d\n", st.size(), bnum, i, j);
                // for (auto it : st)
                // {
                //     printf("%d %d\n", it.first, it.second);
                // }
                if (st.size() == bnum)
                {
                    printf("Red\n");
                    return;
                }
            }
        }
    }
    printf("Draw\n");
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