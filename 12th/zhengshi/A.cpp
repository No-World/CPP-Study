#include <cstdio>
using namespace std;
char a[20];
int main()
{
    a[5] = 0;
    scanf("%s", a + 1);
    bool c = false, d = false, e = false, f = false;
    // printf("%d", a[5]);
    for (int i = 1; i <= 4; i++)
    {
        // printf("%d ", i);
        if (a[i] == 'm')
        {
            c = true;
            // printf("%d\n", i);
        }
        else if (a[i] == 'a')
        {
            d = true;
            // printf("%d\n", i);
        }
        else if (a[i] == 'i')
        {
            e = true;
            // printf("%d\n", i);
        }
        else if (a[i] == 'n')
        {
            f = true;
            // printf("%d\n", i);
        }
    }
    if (c && d && e && f && a[5] == 0)
    {
        printf("main");
    }
    else
    {
        printf("I don't know");
    }
    return 0;
}