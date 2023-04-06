/*题目描述
给出一个函数F（n）= -1 +2 -3 +4 + … + (-1)n*n
求这个函数的函数值。
输入格式
一个整数n；
输出格式
F（n）的值。
样例输入
1
样例输出
-1
提示
1 <= n <= 10^15
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if ( n >= 1 && n <= pow( 10.0 , 15.0 ))
    {
        if ( n % 2 == 0 )
        cout << n / 2;
        else
        cout << 0 - ( n +1 )/ 2;
    }
    return 0;
}