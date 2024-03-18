// Problem: 07:Freda的队列
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-栈和队列
// URL: http://qdacm.openjudge.cn/ds202403/07/
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
const int inf = 0x3f3f3f3f, N = 1e6 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int x[N << 1];
int head = N + 1, tail = N;

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    int a;
    while (n--)
    {
        scanf("%d", &a);
        switch (a)
        {
        case -1:
            if (head <= tail)
            {
                printf("%d\n", x[head++]);
            }
            break;
        case 0:
            for (int t = tail, q = head; ((tail - 1) <= (N << 1)) && (tail - head + 51 <= N) && q <= t; q++)
            {
                x[++tail] = x[q];
            }
            break;
        default:
            x[--head] = a;
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