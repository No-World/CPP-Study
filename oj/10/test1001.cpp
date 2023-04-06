#include <cstdio>
#include <algorithm>
using namespace std;
int a[15010];
int main()
{
    int t;
    while (scanf("%d", &t) != EOF)
    {
        if (t == 0)
        {
            break;
        }
        
        for (int i = 1; i <= t; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a + 1, a + t + 1);
        if (t % 2 == 0)
        {
            printf("%d\n", (a[t / 2] + a[t / 2 + 1]) / 2);
        }
        else
        {
            printf("%d\n", a[t / 2 + 1]);
        }
    }
    return 0;
}