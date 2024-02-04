// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>
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
const int inf = 0x3f3f3f3f, N = 1e4 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char s[N];

void Solution(int __T)
{
    int n, num = 0, flag = 1, cnt = 0, mn = inf;
    scanf("%s", s);
    n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            num++;
        }
        else
        {
            num--;
        }
        if (flag && num < 0)
        {
            flag = 0;
            cnt = i;
        }
        mn = min(mn, num);
    }
    if (mn < 0)
    {
        if (mn < -2 || num < 0)
        {
            printf("-1\n");
            return;
        }
        for (int i = n - 1; i > cnt; i--)
        {
            if (s[i] == '+')
            {
                printf("%d %d\n", cnt + 1, i + 1);
                return;
            }
        }
    }
    else
    {
        printf("1 1\n");
    }
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