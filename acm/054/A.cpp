// #include <bits/stdc++.h>
#include <cstdio>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 7e2 + 10;
int a[N][N], R[N], C[N];

inline void Solution()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        R[i] = C[i] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < k; i++)
    {
        char b;
        int x, y;
        cin >> b >> x >> y;
        if (b == 'R')
        {
            swap(R[x], R[y]);
        }
        else if (b == 'C')
        {
            swap(C[x], C[y]);
        }
        else
        {
            printf("%d\n", a[R[x]][C[y]]);
        }
    }
}

int main(int argc, char const *argv[])
{
    int t = 1;
    // scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}