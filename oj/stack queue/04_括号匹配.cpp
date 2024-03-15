// Problem: 04:括号匹配
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/04/
// Memory Limit: 0 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
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

stack<char> stk, stkr;

void Solution(int __T)
{
    // 注意数组大小
    int l = 0, r = 0;
    string s;
    cin >> s;
    for (auto it : s)
    {
        if (it == '{' || it == '[' || it == '(')
        {
            l++;
        }
        else
        {
            r++;
        }
        stk.push(it);
    }
    if (l > r)
    {
        printf("Extra left brackets\n");
    }
    else if (l < r)
    {
        printf("Extra right brackets\n");
    }
    else
    {
        while (!stk.empty())
        {

            auto it = stk.top();
            if (it == '{')
            {
                if (stkr.top() == '}')
                {
                    stk.pop(), stkr.pop();
                }
                else
                {
                    printf("Brackets not match\n");
                    return;
                }
            }
            else if (it == '[')
            {
                if (stkr.top() == ']')
                {
                    stk.pop(), stkr.pop();
                }
                else
                {
                    printf("Brackets not match\n");
                    return;
                }
            }
            else if (it == '(')
            {
                if (stkr.top() == ')')
                {
                    stk.pop(), stkr.pop();
                }
                else
                {
                    printf("Brackets not match\n");
                    return;
                }
            }
            else
            {
                stkr.push(stk.top());
                stk.pop();
            }
        }
        printf("Brackets match\n");
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