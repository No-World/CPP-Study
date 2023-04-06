#include <cstdio>
using namespace std;
int a[3], b[3], c[3];
int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("请输入第%d名学生三科成绩：", i + 1);
        scanf("%d%d%d", &a[i], &b[i], &c[i]);
    }
    for (int i = 0; i < 3; i++)
        printf("第%d名学生的总成绩为：%d\n", i + 1, a[i] + b[i] + c[i]);
    return 0;
}