// Problem: 07:树的转换
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-树和二叉树
// URL: http://qdacm.openjudge.cn/ds202405/07/
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
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

string s;
int res1 = -1, res2 = -1, i = 0;

void dfs(int &i, int dep1, int dep2)
{
    res1 = max(res1, dep1);
    res2 = max(res2, dep2);
    int cnt = 0;
    while (s[i])
    {
        if (s[i] == 'd')
        {
            dfs(++i, dep1 + 1, dep2 + cnt + 1); // dep2就是父节点的高度 + 左兄弟数+1
            cnt++;                              // 记录的已经有的dfs分支 也就是左兄弟
        }
        else
        {
            i++;
            return;
        }
    }
}

void Solution(int __T)
{
    // 注意数组大小
    // cin >> s;
    dfs(i, 0, 0);
    // cout << s << '\n';
    cout << "Tree " << __T + 1 << ": " << res1 << " => " << res2 << '\n';
    res1 = -1, res2 = -1, i = 0;
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; cin >> s && s[0] != '#'; i++)
    {
        Solution(i);
    }
    return 0;
}