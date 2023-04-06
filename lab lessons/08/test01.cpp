#include <cstdio>
using namespace std;
int a[100];
int main()
{
    for (int i = 0; i <= 100; i++)
        a[i] = i + 1;
    int n = 0;
    for (int i = 0; i <= 100; i++)
        if (a[i] % 3 == 0)
        {
            n++;
            printf("%d ", a[i]);
            if (n % 5 == 0)
                printf("\n");
        }
    return 0;
}