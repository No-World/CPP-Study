#include <cstdio>
using namespace std;

bool a[10001];

int main()
{
    int n, m = 0, M, b, c;
    scanf("%d %d", &n, &M);
    for (int i = 1; i <= M; i++)
    {
        scanf("%d %d", &b, &c);
        for (int j = b; j <= c; j++)
            a[j] = true;
    }
    for (int i = 0; i <= n; i++)
    {
        if (a[i] != 1)
            m++;
    }
    printf("%d", m);
    return 0;
}
