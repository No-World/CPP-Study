#include <cstdio>
#include <cstring>
using namespace std;
char a[200010];
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        memset(a, 0, sizeof(a + 1));
        scanf("%s", a + 1);
        int b = strlen(a + 1);
        for (int i = 1; i <= b; i++)
        {
            if ((a[i] >= 'A' && a[i] <= 'Z' && a[i + 1] > 'Z') && i != b)
            {
                a[i] -= 'A' - 'a';
            }
            else if ((a[i] >= 'a' && a[i] <= 'z') && ((a[i + 1] >= 'A' && a[i + 1] <= 'Z') || (i == b)))
            {
                a[i] += 'A' - 'a';
            }
            printf("%c", a[i]);
        }
        printf("\n");
    }
    return 0;
}