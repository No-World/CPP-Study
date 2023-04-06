#include <cstdio>
using namespace std;

int main()
{
    int x;
    double y, p;
    scanf("%d %lf", &x, &y);
    if (x == 1)
        p = y * 0.8;
    else if (x == 2)
        p = y * 0.6 + y * 0.8;
    else if (x == 3)
        p = y * 0.55 + y * 0.6 + y * 0.8;
    else if (x >= 4)
        p = y * ((double)x - 3) * 0.5 + y * 0.55 + y * 0.6 + y * 0.8;
    if (p <= 50)
        p = p + 10;
    printf("%.2lf", p);
    return 0;
}