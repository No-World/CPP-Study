#include <cstdio>
using namespace std;
int arr[5];
int main()
{
    double ans1, ans2;
    printf("请输入数组的5个元素：\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
        ans1 += arr[i];
    }
    ans2 = ans1 / 5;
    printf("数组所有元素之和为：%g\n", ans1);
    printf("数组所有元素平均值为：%g", ans2);
    return 0;
}