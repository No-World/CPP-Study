#include <cstdio>
using namespace std;

int a[3][50001], x[50001];

int main()
{
    int M, N, y;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        scanf("%d %d", &a[1][i], &a[2][i]);
    scanf("%d", &M);
    for (int i = 1; i <= M; i++)
    {
        scanf("%d", &y);
        for (int j = 1; j <= M; j++)
            if (y >= a[1][j] && y <= a[2][j])
                x[i]++;
    }
    for (int i = 1; i <= M; i++)
        printf("%d\n", x[i]);

    return 0;
}