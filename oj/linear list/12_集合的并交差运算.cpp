// Problem: 12:集合的并交差运算
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22级数据结构-线性表
// URL: http://qdacm.openjudge.cn/ds202402/12/
// Memory Limit: 64 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <cmath>
// #include <queue>
#include <map>
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

map<int, int> mp;
int a[N], b[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        mp[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
        mp[b[i]]++;

        if (mp[b[i]] == 2)
        {
            ans++;
        }
    }
    printf("%d ", n + m - ans);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[b[i]] != 2)
        {
            printf("%d ", b[i]);
        }
    }
    printf("\n%d ", ans);
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] == 2)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n%d ", n - ans);
    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] != 2)
        {
            printf("%d ", a[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}