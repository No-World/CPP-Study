#include <iostream>
using namespace std;

int main()
{
    int a;
    int m, n, c = 0, d = 0;
    bool b = false, e = false;
    cin >> m >> n;
    // a[2] == 2;
    for (int i = m; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            a = 0;
            for (int k = 1; k <= i; k++)
            {
                if (j % k == 0)
                    a++;
                if (a > d)
                {
                    d = a;
                    c = j;
                    // printf("%d %d\n", c, d);
                }
                // printf("%d %d %d\n", i, j, a);
            }
        }
        e = (c == i);

        if (!b && e)
        {
            printf("%d", i);
            b = true;
        }
        else if (e)
            printf(",%d", i);
    }
    if (!b)
        printf("NO");

    return 0;
}