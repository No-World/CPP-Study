#include <cstdio>
using namespace std;

int main()
{
    double F;
    if (F >= -459.67)
    {
        scanf("%lf",&F);
        printf("%.5lf",( F - 32 )/ 9 * 5 );
    }
    return 0;
}