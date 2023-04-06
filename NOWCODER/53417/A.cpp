#include <cstdio>
using namespace std;
int a[20];
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    m--;
    for (int i = n; i >= 0; i--)
    {
        int sum = 1;
        for (int j = 1; j <= i; j++)
        {
            sum *= 2;
        }
        if (m >= sum)
        {
            a[n - i] = 1;
            m -= sum;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 1)
        {
            printf("T");
        }
        else
        {
            printf("F");
        }
    }
    printf("\n");

    return 0;
}