// Problem: 云影密码
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/53485/A
// Memory Limit: 524288 MB
// Time Limit: 4000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
#include <cstring>
// #include <algorithm>
// #include <iostream>
// #include <vector>
// #include <queue>
// #include <map>
// #include <set>
// #include <cmath>
using namespace std;
// typedef long long ll;
const int MAXN = 1e6 + 10;
char SZ[MAXN];

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", SZ + 1);
        int l = strlen(SZ + 1);
        char sum = 0;
        for (int i = 1; i <= l + 1; i++)
        {
            if (SZ[i] == '0' || SZ[i] == 0)
            {
                printf("%c", sum + 'a' - 1);
                sum = 0;
            }
            else
            {
                sum += SZ[i] - '0';
            }
            SZ[i] = 0;
        }
        putchar('\n');
    }

    return 0;
}