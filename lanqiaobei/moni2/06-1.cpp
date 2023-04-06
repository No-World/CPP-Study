#include <cstdio>
using namespace std;
int main()
{
    double t1, c ,s, v, t2;
    scanf("%lf %lf %lf", &t1, &c, &s);
    v = c / t1;
    t2 = s / v - t1;
    printf("%.0lf",t2);
    return 0;
}