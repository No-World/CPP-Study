#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    printf("从键盘上输入三个整数：");
        scanf("%d%d%d", &a, &b, &c);
    printf("最大的整数为：%d", max(a, max(b, c)));
    return 0;
}