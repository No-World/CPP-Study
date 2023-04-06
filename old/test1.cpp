//一道简单的数学题

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n , x = 0 , y = 0 ;
    double c;
    scanf("%d",&n);
    c = n *( x + y ) - 2 * x * y;
    do
    {
        x = x + 1;
        y = 0;
        do
        {
            y = y + 1;
            printf("x:%d  y:%d\n",x,y);
            c = n *( x + y ) - 2 * x * y;
        }while (c != 0 && y <=10000);
    }while (c != 0);
    cout << "x=" << x << "\n" << "y=" << y << "\n";
    system("pause");
    return 0;
}