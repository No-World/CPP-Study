#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[2010][2010], b[2010][2010], c[2010];
int main()
{
    int t, k;
    scanf("%d%d", &t, &k);
    for (int i = 0; i <= 2000; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 2; i <= 2000; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a[i][j] = (a[i - 1][j - 1] + a[i - 1][j]) % k;
            if (a[i][j] == 0)
            {
                c[j]++;
            }
            b[i][j] = b[i][j - 1] + c[j];
        }
    }
    while (t--)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        m = min(m, n);
        printf("%d\n", b[n][m]);
    }

    return 0;
}