#include <bits/stdc++.h>
// #include <iostream>
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
typedef long long ll;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 1e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

int num[40], two[40];

void Solution(int __T)
{
    int cnt = 1;
    for (int i = 0; i < 30; i++)
    {
        two[i] = cnt;
        cnt <<= 1;
    }
    // printf("%d\n", cnt);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a == 1)
        {
            num[b]++;
        }
        else
        {
            if (b > 0)
            {
                int ef = upper_bound(two, two + 30, b) - two - 1;
                for (int i = ef; i > -1; i--)
                {
                    if (b >= two[i])
                    {
                        b -= two[i] * min(b / two[i], num[i]);
                    }
                }
            }
            if (!b)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
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