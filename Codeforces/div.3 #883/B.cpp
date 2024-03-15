// Problem: B. Rudolph and Tic-Tac-Toe
// Contest: Codeforces Round 883 (Div. 3)
// URL: https://codeforces.com/contest/1846/problem/B
// Memory Limit: 256 MB
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
const int inf = 0x3f3f3f3f, N = 1e1 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char a[N][N];

void Solution(int __T)
{
    // 注意数组大小
    scanf("%s%s%s", a[0], a[1], a[2]);
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][1] != '.')
        {
            printf("%c\n", a[i][1]);
            return;
        }
        if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[1][i] != '.')
        {
            printf("%c\n", a[1][i]);
            return;
        }
    }
    if (a[1][1] == a[2][2] && a[2][2] == a[0][0] && a[1][1] != '.')
    {
        printf("%c\n", a[1][1]);
        return;
    }
    if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[1][1] != '.')
    {
        printf("%c\n", a[1][1]);
        return;
    }
    printf("DRAW\n");
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