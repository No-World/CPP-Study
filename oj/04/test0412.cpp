#include <iostream>
using namespace std;

int main()
{
    int m, n, a, c = 0;
    double b = 0;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &a);
        if (a > n)
        {
            b = b + a;
            c++;
        }
    }
    printf("%.2f", b / c);
    return 0;
}