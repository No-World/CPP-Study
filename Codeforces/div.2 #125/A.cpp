#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        double sum;
        scanf("%d%d", &x, &y);
        if (x == 0 && y == 0)
        {
            printf("0\n");
        }
        else
        {
            sum = sqrt(x * x + y * y);
            if (sum == (int)sum)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }

    return 0;
}