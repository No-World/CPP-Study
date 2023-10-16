#include <cstdio>
using namespace std;

int main()
{
    int a;
    double b;
    scanf("%d", &a);

    if (a >= 0 && a <= 240)
    {
        b = a * 0.4883;
        printf("%.2f", b);
    }
    else if (a >= 241 && a <= 400)
    {
        b = (a - 240) * 0.5383 + 240 * 0.4883;
        printf("%.2f", b);
    }
    else if (a > 400)
    {
        b = (a - 400) * 0.7883 + 240 * 0.4883 + (400 - 240) * 0.5383;
        printf("%.2f", b);
    }

    return 0;
}