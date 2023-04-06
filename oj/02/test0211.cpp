#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double N;
    cin >> N;

    if( 0 <= N && N < 5 )
    printf("%.3f", - N + 2.5 );

    else if( 5 <= N && N < 10 )
    printf("%.3f", 2 -1.5 * pow(( N - 3 ),2.0 ));

    else if( 10 <= N && N < 20 )
    printf("%.3f", N / 2 - 1.5 );

    return 0;
}