#include <iostream>
#include <iomanip>                                    //让变量以标准格式输出的头文件
using namespace std;
int main()
{
    int a;
    cin >> a;

    float b;
    cin >> b;

    double c;
    cin >> c;

    cout << std::right << setw(4) << a <<endl;        //让整形变量a右对齐,占四个宽度输出

    cout.setf(ios_base::fixed);                       //设置让函数以定点格式而非浮点格式输出

    cout << fixed << setprecision(2) << b <<endl;     //让float变量b以保留小数后两位的定点格式输出

    cout << fixed << setprecision(6) << c;            //让double变量c以保留小数后六位的定点格式输出

    return 0;
}