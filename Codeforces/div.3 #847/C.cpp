#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    int a[110][110];
    int b[110];
    while (t--)
    {
        int sum = 0;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        int n;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 1; i <= n; i++)
        {
            b[a[i][1]]++;
            if (b[a[i][1]] >= 2)
            {
                sum = a[i][1];
                break;
            }
        }
        printf("%d ", sum);
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (a[j][i] != sum)
                {
                    sum = a[j][i];
                    printf("%d ", sum);
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}