#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a , c = 0.0 , d = 0.0;
    char b;

    cin >> a >> b;

    if( a > 0.0 && a <= 1000.0)
    c = 8.0;

    else if( a > 1000)
    c = 8.0 + ceil(( a - 1000.0 )/ 500.0 ) * 4.0;

    if( b == 'y')
    d=5.0;

    printf("%.0f",c + d);

    return 0;
}