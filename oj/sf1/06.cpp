#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int a[110][110];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        memset(a, 0, sizeof(a));
        scanf("%d", &n);
        a[0][0] = n * n;
        if (n % 2 == 0)
            for (int i = 0; i < n * n; i -= 3)
            {
                // printf("%d ", a[i][0]);
                for (int j = 1; j < n; j++)
                {
                    a[i][j] = a[i][j - 1] - 1;
                    // printf("%3d ", a[i][j]);
                }
                // printf("\n");
                a[i + 1][0] = a[i][n - 1] - 1;
            }
    }

    return 0;
}