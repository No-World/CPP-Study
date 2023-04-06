#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "请输入两个整数：";
    cin >> a >> b;
    cout << a << "+" << b << "的结果为：" << add(a, b) << endl;
    cout << a << "-" << b << "的结果为：" << sub(a, b) << endl;
    cout << a << "*" << b << "的结果为：" << mul(a, b);
    return 0;
}