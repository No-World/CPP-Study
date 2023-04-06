#include <cstdio>
using namespace std;
char a[10010];
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int t;
        scanf("%d\n%s", &t, a + 1);
        int sum = 1, flag = 0;
        for (int i = 1; i <= t; i++)
        {
            if (sum == 1)
            {
                if (a[i] == 'm' || a[i] == 'M')
                {
                    continue;
                }
                else if (a[i] == 'e' || a[i] == 'E')
                {
                    sum++;
                }
                else
                {
                    break;
                }
            }
            else if (sum == 2)
            {
                if (a[i] == 'e' || a[i] == 'E')
                {
                    continue;
                }
                else if (a[i] == 'o' || a[i] == 'O')
                {
                    sum++;
                }
                else
                {
                    break;
                }
            }
            else if (sum == 3)
            {
                if (a[i] == 'o' || a[i] == 'O')
                {
                    continue;
                }
                else if (a[i] == 'W' || a[i] == 'w')
                {
                    if (i == t)
                    {
                        flag = 1;
                    }
                    sum++;
                }
                else
                {
                    break;
                }
            }
            else if (sum == 4)
            {
                if (a[i] != 'W' && a[i] != 'w')
                {
                    break;
                }
                else if (i == t)
                {
                    flag = 1;
                }
            }
        }
        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf(("NO\n"));
        }
    }

    return 0;
}