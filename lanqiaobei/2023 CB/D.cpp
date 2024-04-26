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

bool landed[10]; // 初始化全0，没有飞机降落
int T, n;
struct plane
{
    int time, delay, land;
} p[10];

int dfs(int num, int last)
{ // num为目前已降落的飞机数，last为上一架飞机降落完毕的时间
    if (num == n)
        return 1; // 最小尺度
    for (int i = 0; i < n; i++)
    { // 遍历找一个未访问过的节点
        if (!landed[i] && p[i].time + p[i].delay >= last)
        {
            landed[i] = 1;
            if (p[i].time > last && dfs(num + 1, p[i].time + p[i].land))
                return 1; // 上一架飞机降落完毕后下一架飞机还没到
            if (p[i].time <= last && dfs(num + 1, last + p[i].land))
                return 1;  // 上一架飞机降落完毕前下一架飞机已经到达
            landed[i] = 0; // 未找到满足条件的序列则回溯到上一层
        }
    }
    return 0;
}

void Solution(int __T)
{
    // 注意数组大小
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        landed[i] = 0; // 每组测试前landed数组清零
    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &(p + i)->time, &(p + i)->delay, &(p + i)->land);
    if (dfs(0, 0))
        printf("YES\n"); // 记得换行，否则与输出不符
    else
        printf("NO\n");
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