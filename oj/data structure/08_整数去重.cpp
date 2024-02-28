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
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

struct node
{
    int x, y;
} a[N];

bool cmp(node x, node y)
{
    return x.y < y.y;
}

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 101; i++)
    {
        a[i].x = i;
        a[i].y = inf;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (a[x].y == inf)
        {
            a[x].y = i;
        }
    }
    sort(a, a + 101, cmp);
    for (int i = 0; a[i].y != inf; i++)
    {
        printf("%d ", a[i].x);
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