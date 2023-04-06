#include <cstdio>
#include <cstring>
using namespace std;
char a[40];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        memset(a, 0, sizeof(a));
        scanf("%s", a + 1);
        int len = strlen(a + 1);
        for (int i = 1; i <= len; i++)
        {
            if (i == 1 && a[i] <= 'z' && a[i] >= 'a')
            {
                printf("%c", a[i] - 'a' + 'A');
            }
            else if (i != 1 && a[i] <= 'Z' && a[i] >= 'A')
            {
                printf("%c", a[i] - 'A' + 'a');
            }
            else
            {
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}