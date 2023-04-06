#include <cstdio>
#include <cstring>
using namespace std;
char a[100];
int main()
{
    scanf("%[^\n]s", a + 1);
    int b = strlen(a + 1);
    for (int i = 1; i <= b; i++)
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            if (a[i] == 'z' || a[i] == 'Z')
                a[i] -= 25;
            else
                a[i]++;
    for (int i = 1; i <= b; i++)
        printf("%c", a[i]);
    return 0;
}