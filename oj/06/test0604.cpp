#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double a = 0, x, y;
    int n, p;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        x = 0, y = 0, p = 0;
        scanf("%lf%lf%d", &x, &y, &p);
        a += sqrt(x * x + y * y) / 50 * 2 + 1.5 * (double)p;
    }
    printf("%.0f", ceil(a));

    return 0;
}