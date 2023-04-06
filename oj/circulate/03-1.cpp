#include <cstdio>
using namespace std;

int main()
{
    int y , m , d , n;
    scanf("%d %d %d %d",&y,&m,&d,&n);
    do
    {
        if ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 )
        {
            if ( d + n <= 31 && d + n > 0 )
            {
                d = d + n;
                n = 0;
            }
            else if ( d + n > 31)
            {
                m ++;
                n = n -( 32 - d );
                d = 1;
            }
        }
        else if ( m == 4 || m == 6 || m == 9 || m == 11 )
        {
            if ( d + n <= 30 && d + n > 0 )
            {
                d = d + n;
                n = 0;
            }
            else if ( d + n > 30)
            {
                m ++;
                n = n -( 31 - d );
                d = 1;
            }
        }
        else if ( m == 2 )
        {
            if (( y % 100 !=0 && y % 4 == 0) || y % 400 == 0 )
            {
                if ( d + n <= 29 && d + n > 0 )
                {
                    d = d + n;
                    n = 0;
                }
                else if ( d + n > 29)
                {
                    m ++;
                    n = n -( 30 - d );
                    d = 1;
                }
            }
            else
            {
                if ( d + n <= 28 && m + n > 0 )
                {
                    d = d + n;
                    n = 0;
                }
                else if ( d + n > 38)
                {
                    m = m + 1;
                    n = n -( 29 - d );
                    d = 1;
                }
            }
        }
        else if ( m == 12 )
        {
            if ( d + n <= 31 && m + n > 0 )
            {
                d = d + n;
                n = 0;
            }
            else if ( d + n > 31)
            {
                y ++;
                m = 1;
                n = n -( 32 - d );
                d = 1;
            }
        }
    }while (n > 0);
    printf("%d-%02d-%02d",y,m,d);
    return 0;
}