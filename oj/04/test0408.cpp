#include <cstdio>
using namespace std;

int main()
{
    int m, n, a = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
        if (i % 2 != 0)
            a = a + i;
    printf("%d", a);

    return 0;
}