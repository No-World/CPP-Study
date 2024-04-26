// Problem: 05:二叉树的深度
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-树和二叉树
// URL: http://qdacm.openjudge.cn/ds202405/05/
// Memory Limit: 63 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
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

int Left[15] = {0};
int Right[15] = {0};
int d = 0;

void dfs(int i, int dep)
{
    d = max(d, dep);
    if (Left[i] != -1)
    {
        dfs(Left[i], dep + 1);
    }
    if (Right[i] != -1)
    {
        dfs(Right[i], dep + 1);
    }
}

void Solution(int __T)
{
    // 注意数组大小

    int n, l, r;
    cin >> n;
    memset(Left, 0xff, sizeof(Left));
    memset(Right, 0xff, sizeof(Right));
    for (int i = 1; i <= n; ++i)
    {
        cin >> l >> r;
        if (l != -1)
        {
            Left[i] = l;
        }
        if (r != -1)
        {
            Right[i] = r;
        }
    }
    dfs(1, 1);
    cout << d << endl;
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