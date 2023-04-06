#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    int min = a,max = a;
    if(b > max)
    max = b;
    if(c > max)
    max = c;
    if (b < min)
    min = b;
    if (c < min)
    min = c;
    cout << a+b+c << " " << ( a + b + c )/3 << " " << a * b * c << " " << min << " " << max;
    return 0;
}