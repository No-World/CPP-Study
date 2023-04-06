#include <cstdio>
#include <cmath>
using namespace std;
#define PI acos(-1)
int main()
{
    double a, b, s;
    scanf("%lf", &a);
    b = 2 * a * cos(PI / 6.0);
    s =1 / 2.0 * b * b * sin(PI / 3.0);
    printf("%.4lf", s);
    return 0;
}