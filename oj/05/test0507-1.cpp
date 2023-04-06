#include <cstdio>
using namespace std;

int main()
{
    int y, m, d, y1, m1, d1, n;
    bool x = false;
    scanf("%d %d %d", &y, &m, &d);
    scanf("%d %d %d", &y1, &m1, &d1);
    do
    {
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10)
        {
            if (d + 1 <= 31)
                d++;
            else if (d + 1 > 31)
            {
                m++;
                d = 1;
            }
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d + 1 <= 30)
                d++;
            else if (d + 1 > 30)
            {
                m++;
                d = 1;
            }
        }
        else if (m == 2)
        {
            if ((y % 100 != 0 && y % 4 == 0) || y % 400 == 0)
            {
                if (d + 1 <= 29)
                    d++;
                else if (d + 1 > 29)
                {
                    m++;
                    d = 1;
                }
            }
            else
            {
                if (d + 1 <= 28)
                    d++;
                else if (d + 1 > 28)
                {
                    m++;
                    d = 1;
                }
            }
        }
        else if (m == 12)
        {
            if (d + 1 <= 31)
                d++;
            else if (d + 1 > 31)
            {
                y++;
                m = 1;
                d = 1;
            }
        }
        n++;
        if (y == y1 && m == m1 && d == d1)
            x = true;
    } while (!x);
    printf("%d", n);
    return 0;
}