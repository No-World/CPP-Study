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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char s[2][N];
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1}, n;

int dfs(int x, int y)
{
    if (x > 1 || x < 0 || y == n || y < 0)
    {
        return 0;
    }
    if (s[x][y] == '*')
    {
        s[x][y] = '.';
        return 1 + dfs(x + 1, y) + dfs(x - 1, y) + dfs(x, y + 1) + dfs(x, y - 1);
    }
    return 0;
}

void Solution(int __T)
{
    int ans = 0;
    scanf("%d%s%s", &n, s[0], s[1]);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == '*')
            {
                ans += dfs(i, j) - 1;
            }
        }
    }
    printf("%d\n", ans);
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}