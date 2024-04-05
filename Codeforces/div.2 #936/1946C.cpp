// Problem: C. Tree Cutting
// Contest: Codeforces Round 936 (Div. 2)
// URL: https://codeforces.com/contest/1946/problem/C
// Memory Limit: 512 MB
// Time Limit: 3000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
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
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

vector<int> e[N];
int cnt, n, m;

// dfs(当前结点, 上一个结点, 子树被分割最小大小)
int dfs(int now, int lst, int t)
{
    int num = 1;
    // 遍历子树结点
    for (auto x : e[now])
    {
        if (x != lst)
        {
            num += dfs(x, now, t);
        }
    }
    // 如果当前子树结点大于等于k,则把当前子树切出去,如果到最后根小于k,可以认为根与相邻子树合为同一子树
    if (num >= t)
    {
        cnt++;
        return 0;
    }
    return num;
}

// 二分答案检查函数
bool check(int x)
{
    cnt = 0;
    dfs(1, 0, x);
    return cnt > m;
}

void Solution(int __T)
{
    // 注意数组大小
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        e[i].clear();
    }
    for (int i = 1; i < n; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        e[u].push_back(v), e[v].push_back(u);
    }
    int l = 1, r = n;
    while (l + 1 < r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    printf("%d\n", l);
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