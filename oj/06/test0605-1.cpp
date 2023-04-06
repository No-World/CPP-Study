#include <cstdio>
using namespace std;

float ss[10010];

int main()
{
    int n;
    float s1, s = 0, d = 0, f = 100;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &ss[i]);
        s += ss[i];
    }
    for (int i = 1; i <= n; i++)
    {
        f = 100;
        scanf("%f", &f);
        if (f <= 100 && f >= 90)
            d += 4.0 * ss[i];
        else if (f < 90 && f >= 85)
            d += 3.7 * ss[i];
        else if (f < 85 && f >= 82)
            d += 3.3 * ss[i];
        else if (f < 82 && f >= 78)
            d += 3.0 * ss[i];
        else if (f < 78 && f >= 75)
            d += 2.7 * ss[i];
        else if (f < 75 && f >= 72)
            d += 2.3 * ss[i];
        else if (f < 72 && f >= 68)
            d += 2.0 * ss[i];
        else if (f < 68 && f >= 64)
            d += 1.5 * ss[i];
        else if (f < 64 && f >= 60)
            d += 1 * ss[i];
    }
    printf("%.2f", d / s);

    return 0;
}