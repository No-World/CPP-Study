#include <cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, s, r;
        scanf("%d%d%d", &n, &s, &r);
        int num = s - r;
        int m = n;
        for (int i = 1; i < n; i++)
        {
            m--;
            printf("%d ", r / m);
            r -= r / m;
        }
        printf("%d\n", num);
    }

    return 0;
}