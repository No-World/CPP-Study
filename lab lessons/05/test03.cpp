#include <cstdio>
using namespace std;

int main()
{
    int y;
    printf("请输入一个年份：");
    scanf("%d", &y);
    if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)
    printf("该年份为闰年");
    else
    printf("该年份不是闰年");

    return 0;
}