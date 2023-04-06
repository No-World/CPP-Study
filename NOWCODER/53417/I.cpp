#include <cstdio>
using namespace std;
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = 1;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else if (b > a)
        {
            b -= a;
        }
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}