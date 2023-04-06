#include <cstdio>
#include <algorithm>
using namespace std;
int a[100010];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    printf("%d\n", a[n / 2 + 1] - a[n / 2]);
    return 0;
}