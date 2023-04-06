#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x,a,b,c,d;
    cin >> x >> a >> b >> c >> d;
    printf("%.7f",a * pow( x , 3.0 ) + b * pow( x,2.0 ) + c * x + d);
    return 0;
}