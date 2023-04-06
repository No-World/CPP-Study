#include <cstdio>
using namespace std;

int a[10010];

int main()
{
    int n, m, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        a[m]++;
    }
    for (i = 0; i < 10000; i++)
        if (a[i])
            printf("%d ", i);
    return 0;
}