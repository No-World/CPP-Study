#include <cstdio>
using namespace std;
char a[10][33];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", a[i] + 1);
    }
    for (int i = 1; i <= n; i++)
    {
        int j = 1, ans = 0, b = 128;
        for (; j <= 8; j++)
        {
            if (a[i][j] == '1')
            {
                ans += b;
            }
            b /= 2;
        }
        printf("%d.", ans);
        ans = 0;
        b = 128;
        for (; j <= 16; j++)
        {
            if (a[i][j] == '1')
            {
                ans += b;
            }
            b /= 2;
        }
        printf("%d.", ans);
        ans = 0;
        b = 128;
        for (; j <= 24; j++)
        {
            if (a[i][j] == '1')
            {
                ans += b;
            }
            b /= 2;
        }
        printf("%d.", ans);
        ans = 0;
        b = 128;
        for (; j <= 32; j++)
        {
            if (a[i][j] == '1')
            {
                ans += b;
            }
            b /= 2;
        }
        printf("%d\n", ans);
    }
    
    return 0;
}