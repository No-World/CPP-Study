#include <cstdio>
using namespace std;
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        bool b = true;
        int t1, t2, t3, t4;
        scanf("%d%d%d%d", &t1, &t2, &t3, &t4);
        int n;
        scanf("%d", &n);
        while (n--)
        {
            int a;
            scanf("%d", &a);
            if ((a >= t1 && a <= t2) || (a >= t3 && a <= t4))
            {
                b = false;
            }
        }
        if (b)
        {
            printf("N\n");
        }
        else
        {
            printf("Y\n");
        }
    }

    return 0;
}