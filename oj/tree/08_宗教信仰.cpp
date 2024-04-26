// Problem: 08:宗教信仰
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-树和二叉树
// URL: http://qdacm.openjudge.cn/ds202405/08/
// Memory Limit: 64 MB
// Time Limit: 5000 ms

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
const int inf = 0x3f3f3f3f, N = 1e6 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int n, m, i, x, y, po = 0;
int fa[N], ans[N];

int Find(int x) // 查询x的代表
{
    return x == fa[x] ? x : Find(fa[x]);
}

void merge(int x, int y) // 合并x,y所在的集合
{
    x = Find(x);
    y = Find(y);
    fa[y] = x;
}

void Solution(int __T)
{
    // 注意数组大小
    for (int p = 1; p <= 1000; ++p)
    {
        scanf("%d%d", &n, &m);
        if (n == 0 && m == 0)
        {
            break;
        }
        po++;
        ans[p] = n;                  // 初始化ans数组
        for (int l = 1; l <= n; ++l) // 初始化代表数组
        {
            fa[l] = l;
        }
        for (i = 1; i <= m; ++i)
        {
            scanf("%d%d", &x, &y);
            x = Find(x);
            y = Find(y);
            if (x != y) // 也可以写一个函数
            {
                merge(x, y);
                ans[p] -= 1;
            }
        }
    }
    for (int y = 1; y <= po; ++y)
    {
        printf("Case %d: %d\n", y, ans[y]); // 注意输出格式
    }
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