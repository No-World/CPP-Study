#include <cstdio>

int a(int n)
{
    for (int i = 2; i < n / i; i++)
        ;
    {
        if (n % 2 == 0) //若n%2==0则不是素数。
            return 0;
    }
    return 1; //这里是一个辅助函数，用于判断素数。
}

int main()
{
    int i, n;
    int count = 0;
    scanf("%d", &n);
    for (i = 11; i <= n; i++)
    {
        if (a(i)) //判断素数。
        {
            if (i < 100 && i / 10 == i % 10) // i%10判断个位，i/10判断十位。
                count++;
            else if (i > 100 && i < 1000 && i / 100 == i % 10) // i/100判断百位。
                count++;
            else if ((i > 1000 && i / 1000 == i % 10) && (i / 100 - i / 1000 * 10 == i % 100 - i % 10)) // i/100判断百位。
                count++;
        }
    }
    printf("%d", count);
    return 0;
}