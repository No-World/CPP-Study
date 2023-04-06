#include <cstdio>
#include <iostream>
using namespace std;
int a[10];
int main()
{
    int i, j;
    int temp;
    printf("原始数组为：\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (i == 1 && a[i] > a[i - 1])
        {
            int t = a[i];
            a[i] = a[i - 1];
            a[i - 1] = t;
        }
    }
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9 - i; j++)
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    printf("排序后数组为：\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    return 0;
}