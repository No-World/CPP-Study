#include <cstdio>
using namespace std;

int main()
{
    int x;
    printf("请输入x的值：x=");
    scanf("%d", &x);
    printf("输出结果为：y=");
    if (x < 5)
        printf("%d\n", x);
    else if (x >= 5 && x <= 15)
        printf("%d\n", x + 6);
    else
        printf("%d\n", x - 6);
    printf("输出结果为：y=");
    return 0;
}