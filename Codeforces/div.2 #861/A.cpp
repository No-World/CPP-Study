#include <cstdio>
#include <iostream>
using namespace std;
int mod[] = {1, 10, 100, 1000, 10000, 100000, 1000000};
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c = 0, mx, mn, MAX = 0;
        scanf("%d%d", &a, &b);
        for (int i = a; i <= b; i++)
        {
            mx = 0, mn = 0x3f3f3f3f;
            for (int j = 0; j <= 6; j++)
            {
                if (i >= mod[j])
                {
                    int x = i;
                    for (int k = 1; k <= j + 1; k++)
                    {
                        mx = max(mx, x % 10);
                        mn = min(mn, x % 10);
                        x /= 10;
                    }
                }
            }
            if (MAX <= mx - mn)
            {
                MAX = mx - mn;
                c = i;
            }
            if (MAX == 9)
            {
                break;
            }
        }
        printf("%d\n", c);
    }

    return 0;
}