#include <cstdio>
using namespace std;

int main()
{
    int w;
    printf("今天是星期");
    scanf("%d", &w);
    switch (w)
    {
    case 1:
        printf("活动内容为：小组研讨会");
        break;
    case 2:
        printf("活动内容为：面试新员工");
        break;
    case 3:
        printf("活动内容为：参观总部大楼");
        break;
    case 4:
        printf("活动内容为：测试新产品质量");
        break;
    case 5:
        printf("活动内容为：调整下周项目进度");
        break;
    }

    return 0;
}