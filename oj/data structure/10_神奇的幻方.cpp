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

int a[40][40];

void Solution(int __T)
{
    // 注意数组大小
    int n, x, y;
    scanf("%d", &n);
    n = n * 2 - 1;
    x = 1, y = (n + 1) / 2;
    for (int i = 1; i <= n * n; i++)
    {
        a[x][y] = i;
        if (!a[(x - 2 + n) % n + 1][y % n + 1])
            x = (x - 2 + n) % n + 1, y = y % n + 1;
        else
            x = x % n + 1; // 数学运算
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
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