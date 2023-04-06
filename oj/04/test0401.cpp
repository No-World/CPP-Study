#include <cstdio>
using namespace std;
int a[101];

int main()
{
    float m = 0, n;
    scanf("%f", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        m = m + a[i];
    }
    printf("%.2f", m / n);
    return 0;
}