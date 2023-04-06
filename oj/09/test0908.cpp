#include <cstdio>
using namespace std;
double a[100010];
int main()
{
    int n, ans = 0;
    double s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lf", &a[i]);
        s += a[i];
    }
    s /= n;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > s)
        {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}