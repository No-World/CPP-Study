#include <cstdio>
using namespace std;

int main()
{
    int a,n;
    double m = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        m = m + a;
    }
    printf("%d %.5lf", int(m), m / n);
    return 0;
}