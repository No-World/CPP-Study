#include <cstdio>
#include <cstring>
using namespace std;
int a[30], ans2;
char c[1010], ans1;
int main()
{
    int b1, b2;
    scanf("%d", &b1);
    b2 = b1;
    while (b1--)
    {
        memset(c, 0, sizeof(c));
        memset(a, 0, sizeof(a));
        scanf("%s", c + 1);
        int d = strlen(c + 1);
        for (int i = 1; i <= d; i++)
        {
            int c1 = c[i] - 96;
            a[c1]++;
        }
        ans1 = 97;
        ans2 = a[1];
        for (int i = 1; i <= 26; i++)
        {
            if (ans2 < a[i])
            {
                ans1 = i + 96;
                ans2 = a[i];
            }
        }
        printf("%c %d\n", ans1, ans2);
    }
    return 0;
}