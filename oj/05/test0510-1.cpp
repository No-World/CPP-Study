#include <cstdio>
using namespace std;

int main()
{
    double n, k, p = 200;
    bool flag = false;
    while (scanf("%lf %lf", &n, &k) != EOF)
    {
        for (int i = 1; i <= 20; i++)
        {
            if (i != 1)
                p *= 1 + k / 100;
            if (i * n >= p)
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