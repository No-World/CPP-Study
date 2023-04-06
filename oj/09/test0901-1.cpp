#include <cstdio>
using namespace std;
int a[5][5], b[10000010], n, ans1, ans2;
int main()
{
    scanf("%d", &n);
    for (int k = 1; k <= n; k++)
    {
        ans1 = 0;
        for (int i = 1; i <= 4; i++)
        {
            ans2 = 0;
            for (int j = 1; j <= 4; j++)
            {
                scanf("%d", &a[j][i]);
                // ans2 += a[j][i];
                // ans1 = max(ans1, ans2);
            }
        }
        for (int i = 1; i <= 4; i++)
        {
            ans2 = 0;
            for (int j = 1; j <= 4; j++)
            {
                ans2 += a[j][i];
                if (ans1 < ans2)
                    ans1 = ans2;
            }
        }
        for (int i = 1; i <= 4; i++)
        {
            ans2 = 0;
            for (int j = 1; j <= 4; j++)
            {
                ans2 += a[i][j];
                if (ans1 < ans2)
                    ans1 = ans2;
            }
        }
        b[k] = ans1;
    }
    for (int i = 1; i <= n; i++)
        printf("%d\n", b[i]);

    return 0;
}