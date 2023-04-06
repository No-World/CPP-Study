#include <iostream>
#include <cmath>
#include <math.h>
#define PI acos(-1)
using namespace std;
int main()
{
    float y;
    y=pow(sin(PI/4),2.0)+sin(PI/4)*cos(PI/4)-pow(cos(PI/4),2.0);
    cout<<"y="<<y<<endl;
    system("pause");
    return 0;
}