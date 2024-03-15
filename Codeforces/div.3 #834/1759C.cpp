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
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

void Solution(int __T)
{
    // 注意数组大小
    int l, r, x, a, b;
    scanf("%d%d%d%d%d", &l, &r, &x, &a, &b);
    if (a == b)
    {
        printf("0\n");
        return;
    }

    if (abs(a - b) < x)
    {
        if ((a - l >= x && b - l >= x) || (r - a >= x && r - b >= x))
        {
            printf("2\n");
            return;
        }
        if ((a - l >= x && r - b >= x) || (r - a >= x && b - l >= x))
        {
            printf("3\n");
            return;
        }
        else
        {
            printf("-1\n");
            return;
        }
        return;
    }
    printf("1\n");
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // cin >> __T;
    scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}