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
// typedef __int128 lll;
// typedef double db;
// typedef pair<int, int> PII;
const int inf = 0x3f3f3f3f, N = 5e3 + 10, mod = 1e9 + 7;
// const ll INF = __LONG_LONG_MAX__, MOD = 1e9 + 7;

char s[N];

void Solution(int __T)
{
    // 注意数组大小
    scanf("%s", s);
    int len = strlen(s), ans = 0;
    for (int i = len / 2; i > 0; i--)
    {
        int t = 0;
        for (int j = 0; j < len - i; j++)
        {
            if (s[i] == s[i + len] || s[i] == '?' || s[i + len] == '?')
            {
                t++;
                if (t == len)
                {
                    ans = max(ans, i);
                    break;
                }
            }
            else
            {
                t = 0;
            }
        }
    }
    printf("%d\n", ans * 2);
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