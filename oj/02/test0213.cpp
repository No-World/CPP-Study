#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a , b , c , xs;
    cin >> a >> b >> c;

    if (b == 0)
    {
            printf("x1=%.5f", b /( 2 * a ));
            printf("+%.5fi;",sqrt( 4 * a * c - b * b )/( 2 * a ));

            printf("x2=%.5f", b / ( 2 * a ));
            printf("-%.5fi",sqrt( 4 * a * c - b * b )/( 2 * a ));
    }
    else if( b * b == 4 * a *c && a != 0)
    printf("x1=x2=%.5f", (- b + sqrt( b * b - 4 * a * c ))/( 2 * a ));

    else if ( b * b > 4 * a * c && a != 0)
    {
        printf("x1=%.5f;",(- b + sqrt( b * b - 4 * a * c ))/( 2 * a ));

        printf("x2=%.5f",(- b - sqrt( b * b - 4 * a * c ))/( 2 * a ));
    }

    else if ( b * b < 4 * a *c && a != 0 )
    {
        if ( - b /( 2 * a != 0 ))
        {
            printf("x1=%.5f", - b /( 2 * a ));
            printf("+%.5fi;",sqrt( 4 * a * c - b * b )/( 2 * a ));

            printf("x2=%.5f", - b / ( 2 * a ));
            printf("-%.5fi",sqrt( 4 * a * c - b * b )/( 2 * a ));
        }
    }

    return 0;
}