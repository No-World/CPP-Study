#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
    cout << "请输入一个三位数：";
    string a;
    cin >> a ;
    cout << "反向输出的结果为：" << a[2]<<a[1]<<a[0]<<endl;
    cout << "各位数的立方和为：" << pow(a[0]-'0',3.0)+pow(a[1]-'0',3.0) +pow(a[2]-'0',3.0) ; 
    return 0;
}
