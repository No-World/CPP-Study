#include <iostream>
using namespace std;

int main()
{
    double X , Y;
    cin >> X >> Y;

    if( X > 1.0 || X < -1.0 || Y > 1.0 || Y < -1.0)
    printf("no");

    else
    printf("yes");

    return 0;
}