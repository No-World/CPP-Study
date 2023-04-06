#include <cstdio>
using namespace std;
int a[30] = {1}, b[30] = {0, 1}, ans = 1;
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= 30; i++)
    {
        b[i] = b[i - 1] + b[i - 2];
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i - 1] + b[i];
        // printf("%d %d\n", i, a[i]);
    }
    printf("%d", a[n]);
    return 0;
}