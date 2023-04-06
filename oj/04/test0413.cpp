#include <cstdio>
#include <algorithm>
using namespace std;
long long q[31], o[31];

int main()
{
    int n, x = 1, y = 1;
    scanf("%d", &n);
    int m[n];

    for (int i = 1; i <= n; i++)
        scanf("%d", &m[i]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m[i]; j++)
        {
            if (j % 2 != 0)
                printf("%d ", j);
        }
        printf("\n");
        for (int j = 1; j <= m[i]; j++)
        {
            if (j % 2 == 0)
                printf("%d ", j);
        }
        printf("\n\n");
    }

    return 0;
}