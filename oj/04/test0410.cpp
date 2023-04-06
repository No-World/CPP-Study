#include <cstdio>
using namespace std;

long long a[21], b[21];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 20; i++)
    {
        if (i == 1 || i == 2)
            a[i] = 1;
        else
            a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 1; i <= n; i++)
        scanf("%d", &b[i]);
    for (int i = 1; i <= n; i++)
        printf("%d\n", a[b[i]]);
    return 0;
}