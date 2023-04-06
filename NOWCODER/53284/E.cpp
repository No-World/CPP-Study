// Problem: 翻转拼图
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/53284/E
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
#include <cstring>
// #include <algorithm>
#include <iostream>
// #include <vector>
#include <queue>
// #include <map>
// #include <set>
// #include <cmath>
using namespace std;
typedef long long ll;

int board[3][3];              // 棋盘状态
int dx[5] = {0, 0, 0, -1, 1}; // 操作的行偏移量
int dy[5] = {0, -1, 1, 0, 0}; // 操作的列偏移量

// 判断当前状态是否为全正面
bool isAllFront()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 1)
            {
                return false;
            }
        }
    }
    return true;
}

// 翻转指定位置的格子及其周围格子
void flip(int x, int y)
{
    for (int i = 0; i < 5; i++)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (nx >= 0 && nx < 3 && ny >= 0 && ny < 3)
        {
            board[nx][ny] ^= 1; // 异或操作实现翻转
        }
    }
}

// 宽度优先搜索求解最少步数
int bfs()
{
    queue<pair<int, int>> q;
    int step[1 << 9];               // 记录每个状态的最少步数
    memset(step, -1, sizeof(step)); // 初始化为-1
    q.push({0, 0});
    step[0] = 0;
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        int state = p.first, cnt = p.second;
        memcpy(board, &state, sizeof(state)); // 将状态转换为棋盘
        if (isAllFront())
        {
            return cnt;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                flip(i, j);
                int newState;
                memcpy(&newState, board, sizeof(newState)); // 将棋盘转换为状态
                if (step[newState] == -1)
                {
                    q.push({newState, cnt + 1});
                    step[newState] = cnt + 1;
                }
                flip(i, j); // 恢复棋盘状态
            }
        }
    }
    return -1; // 无解
}

int main()
{
    int state = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            state = state * 2 + x; // 将状态转换为二进制数
        }
    }
    int ans = bfs();
    cout << ans << endl;
    return 0;
}
