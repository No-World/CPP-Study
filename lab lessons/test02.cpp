#include <iostream>
#include <cmath> 
#define PI acos( -1 ) 
using namespace std;

int main()
{
    cout << "以下为第一大题\"用数学函数输出如下结果\"内容\n";
    cout << "(1)-345.123的绝对值:" << fabs( - 345.123 ) << endl;
    cout << "(2)30度角的正弦值:" << sin( 30.0 * PI / 180 ) << endl;
    cout << "(3)反余弦值为0.45的角度:" << acos( 0.45 ) << endl;
    cout << "(4)45度角的正切值:" << tan( 45 ) << endl;
    cout << "(5)变量为2的指数函数值:" << exp( 2.0 ) << endl;
    cout << "(6)ln3的值:" << log( 3.0 ) << endl;
    cout << "(7)54的值:" << pow( 5.0 , 4.0 ) << endl;
    cout << "(8)56.7向下取整的值:" << floor( 56.7 ) << endl;
    cout << "(9)34.3的四舍五入的值:" << round( 34.3 ) << endl;
    cout << "(10)根号下45.67的值:" << sqrt( 45.67 ) << endl;
    cout << "以下为第二大题\"输出以下式子的结果\"内容\n";
    cout << "(1)式的结果:" << 1.0 + 1.0 / ( 1.0 + ( 1.0 / ( 1.0 + 1.0 / 5.0 ) ) ) << endl;  //输出（1）式的结果
    cout << "(2)式的结果:" << sqrt ( pow ( 3.0 , 2.0 ) + pow( 4.0 , 2.0 ) ) << endl;  //输出（2）式的结果
    cout << "(3)式的结果:" << ( 2 * sqrt( 5 )*(sqrt( 6 )+ sqrt( 3 ))) / ( 6 + 3 ) <<endl;  //输出（3）式的结果
    cout << "(4)式的结果:" << sqrt(( 1.0 - cos( PI / 3.0 ))/ 2.0 ) << endl;  //输出（4）式的结果
    cout << "(5)式的结果:" << pow( sin( PI / 4 ) , 2.0 ) * 2.0 + sin( PI / 4 ) * cos( PI / 4 ) - pow( cos( PI / 4 ), 2.0 ) << endl;  //输出（5）式的结果
    cout << "(6)式的结果:" << log( log(103.5 + 2.0 ) ) << endl;  //输出（6）式的结果

   return 0;  //标准结束程序
} 