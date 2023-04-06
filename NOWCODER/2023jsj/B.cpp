#include <iostream>
#include <algorithm>

using namespace std;
struct apple
{
    int a;
    int b;
    int c;
} a[100010];
bool cmp(apple x, apple y)
{
    return x.c < y.c;
}
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &a[i].a, &a[i].b);
        a[i].c = a[i].b - a[i].a;
    }
    sort(a + 1, a + n + 1, cmp);
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        // printf("%d\n", a[i].c);
        if (i <= n - k)
        {
            ans += a[i].a;
        }
        else
        {
            ans += a[i].b;
        }
    }
    printf("%d\n", ans);

    return 0;
}