// Problem: DFS搜索
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/67741/A
// Memory Limit: 524288 MB
// Time Limit: 2000 ms

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

string s1 = "DFS", s2 = "dfs";

void Solution(int __T)
{
    // 注意数组大小
    int n;
    string s;
    cin >> n >> s;
    int num1 = 0, num2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        // printf("%d %c\n", i, s[i]);
        if (num1 != 3 && s[i] == s1[num1])
        {
            num1++;
            // printf("1\n");
        }
        if (num2 != 3 && s[i] == s2[num2])
        {
            num2++;
            // printf("2\n");
        }
    }
    printf("%d %d\n", (num1 == 3), (num2 == 3));
}

int main(int argc, char const *argv[])
{
    int __T = 1;
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    cin >> __T;
    // scanf("%d", &__T);
    for (int i = 0; i < __T; i++)
    {
        Solution(i);
    }
    return 0;
}