#include <cstdio>
int main()
{
    int i, n;
    scanf("%d", &n);
    printf("%d=", n);
    i = 2;
    while (n > i)
    {
        if (n % i == 0)
        {
            printf("%d*", i);
            n /= i;
        }
        else
            i++;
    }
    printf("%d\n", i);
    return 0;
}