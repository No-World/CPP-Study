#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if ( a > 0)
    {
        if( a % 2 == 0)
        printf("even");
        
        else
        printf("odd");
    }
    return 0;
}