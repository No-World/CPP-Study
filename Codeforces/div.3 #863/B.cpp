#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double n, x1, y1, x2, y2, ans = 0;
        scanf("%lf%lf%lf%lf%lf", &n, &x1, &y1, &x2, &y2);
        n = n / 2 + 0.5;
        x1 -= n;
        y1 -= n;
        x2 -= n;
        y2 -= n;
        ans = fabs(max(fabs(x2), fabs(y2)) - max(fabs(x1), fabs(y1)));
        printf("%.0lf\n", ans);
    }
    return 0;
}