#include <cstdio>
using namespace std;
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x)
        {
            m -= 12;
        }
    }
    if (m >= 0)
    {
        printf("%d", m * 2);
    }
    else
    {
        printf("0");
    }

    return 0;
}