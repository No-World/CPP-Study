#include <cstdio>
#include <cmath>
using namespace std;
double a;
void tao(double y)
{
    double g = y / (y - 1);
    for (int i = 2; i <= y; i++)
    {
        a = a * g + 1;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1;; i++)
    {
        a = i * n + 1;
        // printf("%d %f\n", n, a[n]);
        tao(n);
        if (floor(a + 0.5) == a)
            break;
    }
    int ans = a;
    printf("%d\n", ans);
    return 0;
}