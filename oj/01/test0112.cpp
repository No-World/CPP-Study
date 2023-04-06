#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,b,c,d,x;
    cin>>x;
    a=x/1000;
    b=x%1000/100;
    c=x%100/10;
    d=x%10;
    cout<<pow(a,2.0)+pow(b,2.0)+pow(c,2.0)+pow(d,2.0);
    return 0;
}