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

void Solution(int __T)
{
    // 注意数组大小
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        int l = n / 2;
        for (int i = 1; i <= n; i++)
        {
            int r = n - i, num = 1;
            for (int j = 1; j <= r; j++)
            {
                if (j == l)
                {
                    printf("0 ");
                }
                else if (num % 2 == 1)
                {
                    printf("1 ");
                    num++;
                }
                else
                {
                    printf("-1 ");
                    num++;
                }
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            int r = n - i;
            for (int j = 1; j <= r; j++)
            {
                if (j % 2 == 1)
                {
                    printf("1 ");
                }
                else
                {
                    printf("-1 ");
                }
            }
        }
    }
    printf("\n");
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