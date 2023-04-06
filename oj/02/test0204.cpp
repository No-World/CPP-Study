#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double Xa,Ya,Xb,Yb;
    cin >> Xa >> Ya;
    cin >> Xb >> Yb;
    printf("%.3f",sqrt(pow(Xa-Xb,2.0)+pow(Ya-Yb,2.0)));
    return 0;
}