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
const int inf = 0x3f3f3f3f, N = 2e5 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int a[N];

bool check(int x, int n)
{
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == x)
        {
            continue;
        }
        if (a[i] > mx)
        {
            mx = a[i];
        }
        else if (a[i] == mx)
        {
            mx++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void Solution(int __T)
{
    int n, mx = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    a[n + 1] = inf, a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
        else if (a[i] == mx)
        {
            mx++;
        }
        else
        {
            if (check(i - 1, n) || check(i, n) || check(i + 1, n))
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
            return;
        }
    }
    printf("YES\n");
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