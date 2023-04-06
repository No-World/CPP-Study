#include <cstdio>
int fun(int n)
{
    if (n % 7 == 0)
        return 1; //能被7整数
    while (n)
    {
        if (n % 10 == 7)
            return 1; //包含7
        n /= 10;
    }
    return 0;
}
//判断是否与7有关

int main()
{
    int i, sum = 0, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (!fun(i))      //如果与7无关
            sum += i * i; //求平方和
    }
    printf("%d", sum);
    return 0;
}