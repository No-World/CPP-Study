#include <cstdio>
using namespace std;
int main()
{
    int n, m, a, max = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (i == 1)
        {
            max = a;
            m = 1;
        }
        else if (a > max)
        {
            max = a;
            m = i;
        }
    }
    printf("%d %d", max, m);
    return 0;
}