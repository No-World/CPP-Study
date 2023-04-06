#include <cstdio>
using namespace std;
int main()
{
    int a, b, ans = 0, i;
    scanf("%d%d", &a, &b);
    if (a == b)
        printf("0");
    else
    {
        if (a > b)
        {
            ans = a;
            a = b;
            b = ans;
        }
        for (i = 1; i > 0; i++)
        {
            a += i;
            if (a == b)
            {
                printf("%d", i);
                break;
            }
            if (a > b)
            {
                if ((a - b) % 2 == 0)
                {
                    printf("%d", i);
                    break;
                }
                else
                {
                    if (i % 2 == 0)
                    {
                        printf("%d", i + 1);
                        break;
                    }
                    if (i % 2 == 1)
                    {
                        printf("%d", i + 2);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}