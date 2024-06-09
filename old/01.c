#include <stdio.h>
#include <math.h>
#include <stdbool.h>

const int N = 1e5 + 10;

int check(int x)
{
    int ans = 0;
    for (int i = 1; i <= x >> 1; i++)
    {
        if (x % i == 0)
        {
            ans += i;
        }
    }
    if (ans == x)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int x;
    while (scanf("%d", &x) != EOF)
    {
        if (check(x) && x > 1)
        {
            printf("%d ", x);
        }
    }

    return 0;
}