#include <cstdio>
#include <iostream>
using namespace std;
char a[200010];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        bool flag = true;
        scanf("%d%d", &n, &m);
        scanf("%s", a + 1);
        for (int i = 1; i <= n; i++)
        {
            if (m > a[i] - '0' && flag)
            {
                printf("%d", m);
                flag = false;
            }
            printf("%c", a[i]);
        }
        if (flag)
        {
            printf("%d", m);
        }
        printf("\n");
    }
    return 0;
}