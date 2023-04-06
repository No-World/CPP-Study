#include <cstdio>
using namespace std;
int main()
{
    int N, n, a = 0;
    scanf("%d", &N);

    for (int i = 2; i <= N; i++)
    {
        if (i == 2)
        {
            printf("%2d ", i);
            a++;
        }
        else
        {
            n = 1;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    n = 0;
                }
            }
            if (n == 1)
            {
                a++;
                if (a % 5 == 0)
                    printf("%2d\n", i);
                else
                    printf("%2d ", i);
            }
        }
    }

    return 0;
}