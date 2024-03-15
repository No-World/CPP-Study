// Problem: 06:银行业务队列简单模拟
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/06/
// Memory Limit: 63 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
#include <queue>
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

queue<int> qee1, qee2;

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x % 2)
        {
            qee1.push(x);
        }
        else
        {
            qee2.push(x);
        }
    }
    while (!qee1.empty() || !qee2.empty())
    {
        int x = 0;
        while (x++ < 2 && !qee1.empty())
        {
            printf("%d ", qee1.front());
            qee1.pop();
        }
        if (!qee2.empty())
        {
            printf("%d ", qee2.front());
            qee2.pop();
        }
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