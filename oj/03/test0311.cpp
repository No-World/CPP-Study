#include <cstdio>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a );
    if ( a > 0 && a < 3000)
    {
        if (( a % 100 != 0 && a % 4 == 0 )||( a % 400 == 0 ))
        printf("Y");
        else
        printf("N");
    }
    return 0;
}