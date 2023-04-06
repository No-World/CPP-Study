#include <cstdio>
double average(double *pa)
{
    int i;
    float avg, sum = 0;
    for (i = 0; i < 10; i++)
    {
        sum = sum + *pa++;
        // printf("%f\t", sum);
    }
    avg = sum / 10.0;
    return avg;
}
int main()
{
    int i;
    double a[10], *pa, aver;
    pa = a;
    printf("输入数组数据：");
    for (i = 0; i < 10; i++)
    {
        scanf("%lf", &a[i]);
    }
    aver = average(pa);
    printf("平均值=%.1lf", aver);
    return 0;
}