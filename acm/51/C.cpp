#include <cstdio>
using namespace std;
char a[20];
int main()
{
    int x, y;
    scanf("%d%s", &x, a + 1);
    int ans = x;

    for (int i = 2; i < 10; i++)
    {
        if (i <= 4)
        {
            ans += i * (a[i] - '0');
        }
        else
        {
            ans += i * (a[i + 1] - '0');
        }
    }
    int mod = ans % 11;
    if (mod == (a[12] - '0') || mod == (a[12] - 'X' + 10))
    {
        printf("Right");
    }
    else
    {
        if (mod != 10)
        {
            a[12] = mod + '0';
        }
        else
        {
            a[12] = 'X';
        }
        printf("%d%s", x, a + 1);
    }

    return 0;
}