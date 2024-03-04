// Problem: 01:字符串插入
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22级数据结构-线性表
// URL: http://qdacm.openjudge.cn/ds202402/01/
// Memory Limit: 64 MB
// Time Limit: 1000 ms

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
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(string str, string substr)
{
    // 注意数组大小
    int mx = -inf;
    for (auto it : str)
    {
        mx = max((int)it, mx);
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == mx)
        {
            str.insert(i + 1, substr);
            break;
        }
    }
    cout << str << '\n';
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    string str, substr;
    while (cin >> str >> substr)
    {
        Solution(str, substr);
    }
    return 0;
}