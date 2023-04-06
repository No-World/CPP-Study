#include <iostream>
#include <iomanip>                                //引用让变量以标准格式输出的头文件
using namespace std;
int main()
{
    double x,y=0;                                 //保证

    for(int i=1;i<=12;i++)
    {
        cin >> x;
        y+=x;                                     //等价于y=y+x
    }

    printf("$%.2f",y/12);
    return 0;
}