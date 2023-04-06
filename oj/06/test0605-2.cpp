#include <cstdio>
using namespace std;

float ss[10010];

int main()
{
    int n, f = 100;
    float s1, s = 0, d = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &ss[i]);
        s += ss[i];
    }
    for (int i = 1; i <= n; i++)
    {
        f = 100;
        scanf("%d", &f);
        switch (f)
        {
        case 90 ... 100:
            d += 4.0 * ss[i];
            break;
        case 85 ... 89:
            d += 3.7 * ss[i];
            break;
        case 82 ... 84:
            d += 3.3 * ss[i];
            break;
        case 78 ... 81:
            d += 3.0 * ss[i];
            break;
        case 75 ... 77:
            d += 2.7 * ss[i];
            break;
        case 72 ... 74:
            d += 2.3 * ss[i];
            break;
        case 68 ... 71:
            d += 2.0 * ss[i];
            break;
        case 64 ... 67:
            d += 1.5 * ss[i];
            break;
        case 60 ... 63:
            d += 1.0 * ss[i];
            break;
        default:
            break;
        }
    }
    printf("%.2f", d / s);

    return 0;
}