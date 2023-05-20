// #include <bits/stdc++.h>
#include <cstdio>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;
// const ll INF = __LONG_LONG_MAX__;
#define maxn 1005
#define lowerbit(x) (x & (-x))

int T, n, k, a[maxn];

void sol()
{
    if (k > lowerbit(n) - 1)
    {
        printf("Impossible\n");
        return;
    }
    for (int i = 1; i <= n; ++i)
        a[i] = i;
    for (int i = 1; i <= k; ++i)
    {
        int len = lowerbit(i);
        for (int j = 1; j <= n; j += (len << 1))
        {
            for (int l = 1; l < len; ++l)
            {
                swap(a[j + l], a[j + len * 2 - 1 - l]);
            }
        }
        for (int j = 1; j <= n; ++j)
        {
            printf("%d%s", a[j], j == n ? "\n" : " ");
        }
    }
}

int main()
{
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        scanf("%d%d", &n, &k);
        sol();
    }
    return 0;
}
