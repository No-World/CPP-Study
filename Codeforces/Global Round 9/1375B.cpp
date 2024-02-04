// Problem: B. Neighbor Grid
// Contest: Codeforces Global Round 9
// URL: https://codeforces.com/contest/1375/problem/B
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
const int inf = 0x3f3f3f3f, N = 3e2 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N][N];

void Solution(int __T)
{
    // 注意数组大小
    int n, m, ans = 1;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j]);
            if (ans)
            {
                if (i > 1 && i < n && j > 1 && j < m)
                {
                    if (a[i][j] > 4)
                    {
                        ans = 0;
                    }
                    else
                    {
                        a[i][j] = 4;
                    }
                }
                else if (i == 1 || i == n)
                {
                    if (j == 1 || j == m)
                    {
                        if (a[i][j] > 2)
                        {
                            ans = 0;
                        }
                        else
                        {
                            a[i][j] = 2;
                        }
                    }
                    else
                    {
                        if (a[i][j] > 3)
                        {
                            ans = 0;
                        }
                        else
                        {
                            a[i][j] = 3;
                        }
                    }
                }
                else if (j == 1 || j == m)
                {
                    if (a[i][j] > 3)
                    {
                        ans = 0;
                    }
                    else
                    {
                        a[i][j] = 3;
                    }
                }
            }
        }
    }
    if (ans)
    {
        printf("YES\n");
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        return;
    }
    printf("NO\n");
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