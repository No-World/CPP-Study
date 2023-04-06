#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    float a;
    int b;
    scanf("%f",&a);
    b = trunc(a);       //trunc函数为向零取整函数
    printf("%d",b);

    return 0;
}