// Problem: 01:二叉树的中序遍历
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-树和二叉树
// URL: http://qdacm.openjudge.cn/ds202405/01/
// Memory Limit: 0 MB
// Time Limit: 10000 ms

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

stack<char> st;

void Solution(int __T)
{
    // 注意数组大小
    string s;
    cin >> s;
    for (auto c : s)
    {
        if (c == '*' && !st.empty())
        {
            cout << st.top();
            st.pop();
        }
        else
        {
            st.push(c);
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