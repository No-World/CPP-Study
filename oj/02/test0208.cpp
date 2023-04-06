#include <iostream>
using namespace std;
int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    if( a == b || a == c || b == c )
    printf ("Yes");
    else
    printf ("No");
    return 0; 
}