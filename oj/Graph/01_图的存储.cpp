// Problem: 01:图的存储
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-图
// URL: http://qdacm.openjudge.cn/ds2024006/01/
// Memory Limit: 128 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
// #include <cmath>
// #include <queue>
// #include <map>
#include <vector>
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

void Solution(int __T)
{
    // 注意数组大小
    int n, m, k;
    cin >> n >> m >> k;
    vector<string> s(n);
    vector<vector<int>> mp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int x, y;
    while (m--)
    {
        cin >> x >> y;
        mp[x].push_back(y);
    }
    for (int i = 0; i < n; i++)
    {
        sort(mp[i].begin(), mp[i].end());
    }
    while (k--)
    {
        cin >> x;
        if (!mp[x].size())
        {
            cout << "0\n";
        }
        else
        {
            for (auto y : mp[x])
            {

                cout << s[y] << ' ';
            }
            cout << '\n';
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