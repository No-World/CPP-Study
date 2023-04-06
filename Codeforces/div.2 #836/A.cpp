#include <cstdio>
#include <cstring>
using namespace std;
char a[110];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        memset(a, 0, sizeof(a));
        scanf("%s", a + 1);
        int len = strlen(a + 1);
        printf("%s", a + 1);
        for (int i = len; i > 0; i--)
        {
            printf("%c", a[i]);
        }
        printf("\n");
    }

    return 0;
}