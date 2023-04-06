// Problem: 神河霓朝纪
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/53284/C
// Memory Limit: 524288 MB
// Time Limit: 6000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <cstdio>
#include <cstring>
// #include <algorithm>
#include <iostream>
// #include <vector>
// #include <queue>
// #include <map>
// #include <set>
// #include <cmath>
using namespace std;
typedef long long ll;
char ys[] = {0, 'W', 'U', 'B', 'G', 'R', 'O'};
int a[10];
int b[10];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        int n, m;
        scanf("%d", &n);
        while (n--)
        {
            char c;
            scanf("%s", &c);
            for (int i = 1; i <= 5; i++)
            {
                if (c == ys[i])
                {
                    a[i]++;
                }
            }
        }
        scanf("%d", &m);
        while (m--)
        {
            string c;
            cin >> c;
            int len = c.length();
            for (int i = 0; i < len; i++)
            {
                for (int j = 1; j <= 6; j++)
                {
                    if (c[i] == ys[j])
                    {
                        b[j]++;
                        break;
                    }
                }
            }
        }
        bool flag1 = false, flag2 = false;
        int sum = 0;
        for (int i = 1; i <= 5; i++)
        {
            a[i] -= b[i];
            if (a[i] < 0)
            {
                break;
            }
            else
            {
                sum += a[i];
            }
            if (i == 5)
            {
                flag1 = true;
            }
        }
        if (sum >= b[6])
        {
            flag2 = true;
        }
        if (flag1 && flag2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}