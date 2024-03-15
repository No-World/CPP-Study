// Problem: 02:链栈
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/02/
// Memory Limit: 4 MB
// Time Limit: 10000 ms

// #include <bits/stdc++.h>
#include <iostream>
// #include <cstring>
#include <algorithm>
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

char a[N];

void Solution(int __T)
{
    // 注意数组大小
    printf("yes\nno\n");
    int n;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%c ", &a[i]);
    }
    reverse(a, a + n);
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%c ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c ", a[i]);
    }
    printf("\nyes");
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