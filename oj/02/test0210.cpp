#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n , x , y , z;
    cin >> n >> x >> y;
    
    z = ceil( y / x );

    if( n - z > 0 )
    printf("%.0f", n - z );

    else
    printf("%.0f", 0 );
    return 0;
}