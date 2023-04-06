#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[1000], a1[1000], b[1000], b1[1000];
    int i, j = 0;
    scanf("%[^\n]\n%[^\n]", a, b);
    int n1 = strlen(a), n2 = strlen(b);
    for (i = 0; i < n1; i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a1[j++] = a[i] + 32;
        else if (a[i] >= 'a' && a[i] <= 'z')
            a1[j++] = a[i];
    a1[j] = '\0';
    // printf("a1=%s\n",a1);
    j = 0;
    for (i = 0; i < n2; i++)
        if (b[i] >= 'A' && b[i] <= 'Z')
            b1[j++] = b[i] + 32;
        else if (b[i] >= 'a' && b[i] <= 'z')
            b1[j++] = b[i];
    b1[j] = '\0';
    // printf("b1=%s\n",b1);
    int res;
    res = strcmp(a1, b1);
    if (res == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}