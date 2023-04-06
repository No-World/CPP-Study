#include <cstdio>
using namespace std;

int a[110];

int main()
{
    int n, b;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &b);
    for (int i = 1; i <= n; i++)
    {
        if (b == a[i])
        {
            printf("Find");
            break;
        }
        else if (i == n && b != a[i])
            printf("Not Find");
    }

    return 0;
}