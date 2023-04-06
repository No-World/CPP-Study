#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("No");
        return 0;
    }
    int a = sqrt(n);
    for (int i = 2; i < a; i++)
        if (n % i == 0)
        {
            printf("No");
            return 0;
        }
    printf("Yes\n");
    return 0;
}