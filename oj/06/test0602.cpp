#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

char a[100];

int main()
{
    int m = 0, k;
    scanf("%s%d", a + 1, &k);
    int b1 = strlen(a + 1), b2 = b1;
    // printf("%s", a[1]);
    while (b1--)
    {
        if (a[b1 + 1] == '3')
            k--;
        m = m + (a[b1 + 1] - '0') * pow(10, b2 - b1 - 1);
    }
    if (k == 0 && m % 19 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}