#include <iostream>  //引用输入输出的标准库
using namespace std; //声明标识符的可见范围
int main()           //声明主函数返回类型
{
    int a,b,c;       //设置整形函数a，b，c
    cin>>a>>b>>c;    //输入函数a，b，c的值
    cout<<a-b*c;     //输出a-b*c的计算结果
    system("pause"); //暂停系统状态
    return 0;        //正常退出，终止系统
}