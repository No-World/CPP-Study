#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int a = 0; a <= n; a++)
    {
        for (int b = 2; b < a; b++)
        {
            for (int c = b; c <= a; c++)
            {
                for (int d = c; d < a; d++)
                {
                    if (pow(a, 3.0) == pow(b, 3.0) + pow(c, 3.0) + pow(d, 3.0))
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
                }
            }
        }
    }
    return 0;
}