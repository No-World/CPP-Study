// Problem: 04:顺序表置逆与查找
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22级数据结构-线性表
// URL: http://qdacm.openjudge.cn/ds202302/04/
// Memory Limit: 63 MB
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
const int inf = 0x3f3f3f3f, N = 2e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N];

void Solution(int __T)
{
    // 注意数组大小
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n - 2; i > 0; i--)
    {
        if (a[i] > x && a[i] < y)
        {
            printf("%d %d\n", a[i + 1], a[i - 1]);
            return;
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
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}