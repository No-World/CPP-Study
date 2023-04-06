#include <cstdio>
#include <cstring>
using namespace std;
char a[30];
int b[30];
int main()
{
    int k;
    while (scanf("%s", a + 1) != EOF)
    {
        scanf("%d", &k);
        int l = strlen(a + 1);
        int p = k;
        while (p--)
        {
            for (int i = 1; i <= l; i++)
            {
                if (a[i] == 'Z')
                {
                    a[i] = 'A';
                }
                else
                    a[i]++;
            }
        }
        for (int i = 1; i <= l; i++)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 1; i <= l; i++)
        {
            printf("%c", a[b[i]]);
        }
        printf("\n");
    }

    return 0;
}