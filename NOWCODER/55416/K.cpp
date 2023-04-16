// Problem: 计算面积
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/55416/K
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
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
// typedef long long ll;
using namespace std;
const int inf = 0x3f3f3f3f, N = 1e3 + 10;

inline void Solution()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", a * b);
    }
    else if (n == 2)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", a * b / 2);
    }
    else
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        printf("%d\n", (a + b) * c / 2);
    }
}

int main(int argc, char const *argv[])
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}