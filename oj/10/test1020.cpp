#include <cstdio>
using namespace std;
int main()
{
    double n, a, b, c, d;
    scanf("%lf", &n);
    for (int i = 1; i <= n; i++)
    {
        int t;
        scanf("%d", &t);
        switch (t)
        {
        case 0 ... 18:
            a++;
            break;
        case 19 ... 35:
            b++;
            break;
        case 36 ... 60:
            c++;
            break;
        default:
            d++;
            break;
        }
    }
    n /= 100;
    a /= n;
    b /= n;
    c /= n;
    d /= n;
    printf("%.2f%\n%.2f%\n%.2f%\n%.2f%\n", a, b, c, d);

    return 0;
}