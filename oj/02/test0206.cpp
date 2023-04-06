#include <iostream>
using namespace std;
int main()
{
    int a=0;
    cin >> a;
    if (95 <= a && a <= 100)
    {
        printf("1");
    }
    else if (90 <= a && a < 95)
    {
        printf("2");
    }
    else if (85 <= a && a < 90)
    {
        printf("3");
    }
    else if (80 <= a && a < 85)
    {
        printf("4");
    }
    else if (70 <= a && a < 80)
    {
        printf("5");
    }
    else if (60 <= a && a < 70)
    {
        printf("6");
    }
    else if (60 > a)
    {
        printf("7");
    }
    return 0;
}