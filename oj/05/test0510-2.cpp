#include <cstdio>

int main()
{
    double n, k;
    while (scanf("%lf%lf", &n, &k) != EOF)
    {
        bool flag = false;
        double rate = 1;
        for (int i = 1; i <= 20; i++)
        {
            if (i != 1)
                rate *= 1 + k / 100;
            if (n * i >= 200 * rate)
            {
                printf("%d\n", i);
                flag = true;
                break;
            }
        }
        if (!flag)
            printf("Impossible\n");
    }
    return 0;
}