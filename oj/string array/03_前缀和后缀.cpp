// Problem: 03:前缀和后缀
// Contest: OpenJudge - 齐齐哈尔大学程序设计在线评测 - 22数据结构-串和数组
// URL: http://qdacm.openjudge.cn/ds202404/03/
// Memory Limit: 64 MB
// Time Limit: 1000 ms

// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
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
const int inf = 0x3f3f3f3f, N = 1e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char s1[N], s2[N];
int Next[N], n, m;

void Get_next()
{
    int i = 1, j = 0;
    Next[0] = -1;
    while (i < n)
    {
        if (j == -1 || s1[i] == s1[j])
        {
            i++;
            j++;
            Next[i] = j;
        }
        else
        {
            j = Next[j];
        }
    }
}

void kmp()
{
    int i = 0, j = 0;
    while (i < m)
    {
        if (j == -1 || s1[j] == s2[i])
        {
            i++;
            j++;
        }
        else
        {
            j = Next[j];
        }
    }
    if (j == 0)
        printf("0\n");
    else
    {
        for (i = 0; i < j; i++)
            printf("%c", s1[i]);
        printf(" %d", j);
        printf("\n");
    }
}

void Solution(int __T)
{
    // 注意数组大小
    // cout << s1 << '\n' << s2 << '\n';
    n = strlen(s1);
    m = strlen(s2);
    Get_next();
    kmp();
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    // scanf("%d", &__T);
    int i = 0;
    while (scanf("%s%s", s1, s2) != EOF)
    {
        Solution(i++);
    }
    return 0;
}