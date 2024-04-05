// Problem: 01:最大正向匹配
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-串和数组
// URL: http://qdacm.openjudge.cn/ds202404/01/
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
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

string str1, str2, s;

void Solution(int __T)
{
    // 注意数组大小
    cin >> s;
    int first = s.find(str1), last = s.rfind(str2) + str2.length();
    // cout << first << ' ' << last << '\n';
    for (int i = first; i < last; i++)
    {
        cout << s[i];
    }
    cout << '\n';
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >> str1 >> str2 >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}