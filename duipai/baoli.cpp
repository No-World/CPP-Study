// Problem: 嘤嘤的签到
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/54129/A
// Memory Limit: 524288 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
// #include <iostream>
// #include <cstring>
// #include <algorithm>
// #include <queue>
// #include <map>
// #include <vector>
using namespace std;
const int inf = 0x3f3f3f3f, N = 1000010;
char a[N];

inline void Solution()
{
    int n;
    long long ans = 0;
    scanf("%d", &n);
    scanf("%s", a + 1);
    for (int len = 1; len <= n; len++)
    {
        for (int i = 1; i <= n - len + 1; i++)
        {
            bool flag1 = false, flag2 = false;
            int r = len + i - 1;
            for (int j = i; j <= r; j++)
            {
                if (a[j] == '1')
                {
                    flag1 = true;
                    // printf("1:%d\n", i);
                }
                else if (a[j] == '4')
                {
                    flag2 = true;
                    // printf("4:%d\n", i);
                }
                if (flag1 && flag2)
                {
                    // printf("1:%d %d\n", i, r);
                    break;
                }
                if (j == r)
                {
                    ans++;
                    // printf("2:%d %d\n", i, r);
                }
            }
        }
    }
    printf("%lld\n", ans);
}

int main(int argc, char const *argv[])
{
    int t = 1;
    // scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}