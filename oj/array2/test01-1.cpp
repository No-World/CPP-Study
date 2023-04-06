#include <cstdio>
#include <cstring>
using namespace std;

char a[110];
int c[110];

int main()
{
    scanf("%s", a + 1);
    int b = strlen(a + 1);
    bool d = false;
    int j = 1;
    for (int i = 1; i <= b; i++)
    {
        if (a[i] == '0' || a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9')
        {
            c[j] = c[j] * 10 + a[i] - '0';
            d = true;
        }
        else if (d)
        {
            printf("%d\n", c[j]);
            j++;
            d = false;
        }
        if (i == b)
            printf("%d", c[j]);
    }
    return 0;
}