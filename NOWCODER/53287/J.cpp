/*
需要符合输入输出描述，
有一种数，它除了1和本身以外有且仅有一个可以除的尽的数;
例如：9、25、49，现在给出一个数n，需要你将1 ~n中所有这样的数都由小到大打印出来，若是找不到这样的数则输出 - 1。
输入描述:
一行一个数n；
用埃氏筛解决问题
输出描述:
若干行符合题意的数；
示例1
输入
100
输出
4
9
25
49
示例2
输入
3
输出
-1
*/
#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int *a = new int[n + 1];
    for (int i = 0; i <= n; i++)
        a[i] = 0;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 2; i * j <= n; j++)
            {
                a[i * j] = 1;
            }
        }
    }
    int flag = 0;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 0)
        {
            int j = 2;
            while (i * j <= n)
            {
                if (a[i * j] == 0)
                {
                    flag = 1;
                    printf("%d\n", i * j);
                }
                j++;
            }
        }
    }
    if (flag == 0)
        printf("-1\n");
    return 0;
}