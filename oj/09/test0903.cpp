#include <cstdio>
using namespace std;
int main()
{
    int ans = 0, n, m = 0;
    scanf("%d", &n);
    for (int i = 10; m < n; i++)
    {
        ans = i * i;
        if (ans / 100 == (ans / 10) % 10 || (ans / 10) % 10 == ans % 10 || ans / 100 == ans % 10)
        {
            m++;
        }
    }
    printf("%d", ans);
    return 0;
}