#include <cstdio>
using namespace std;
int main()
{
    int n;
    double m = 0, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lf", &a);
        m = m + a;
    }
    printf("%.4lf", m / n);
    return 0;
}