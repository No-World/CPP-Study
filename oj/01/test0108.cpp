#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,x1,x2;
    cin>>a>>b>>c;
    x1=(-b+sqrt(pow(b,2.0)-4*a*c))/2;
    x2=(-b-sqrt(pow(b,2.0)-4*a*c))/2;
    cout<<"x1="<<x1<<" x2="<<x2;
    return 0;
}