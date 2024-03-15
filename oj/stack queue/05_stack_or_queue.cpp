// Problem: 05:stack or queue
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/05/
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
#include <stack>
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

stack<int> stk;

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    bool flag = 1;
    while (n--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        if (x == 1)
        {
            stk.push(y);
        }
        else
        {
            if (stk.top() != y)
            {
                flag = 0;
            }
            stk.pop();
        }
    }
    if (flag)
    {
        printf("Stack\n");
    }
    else
    {
        printf("Queue\n");
    }
    while (!stk.empty())
    {
        stk.pop();
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