#include <cstdio>
using namespace std;
int main()
{
    double a, b;
    scanf("%lf", &a);
    b = a / 0.1;
    if (b > 1000)
    {
        b = (a - 100) / 0.2 + 1000;
        if (b > 5000)
        {
            b = (a - 900) / 0.25 + 5000;
        }
    }
    printf("%.0f", b);
    return 0;
}