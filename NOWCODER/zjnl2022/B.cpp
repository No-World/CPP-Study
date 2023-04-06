#include <cstdio>
using namespace std;
char a[110][110];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", a[i] + 1);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int p = 1; p <= 2; p++)
        {
            for (int j = 1; j <= m; j++)
            {
                for (int k = 1; k <= 2; k++)
                {
                    printf("%c", a[i][j]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}