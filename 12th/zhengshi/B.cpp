#include <cstdio>
#include <cstring>
using namespace std;
char a[1000010], b[1000010];
int main()
{
    scanf("%s\n%s", a + 1, b + 1);
    int c = strlen(a + 1);
    int ans = 0;
    for (int i = 1; i <= c; i++)
    {
        if (a[i] != b[i])
        {
            if (a[i + 1] != b[i + 1] && a[i] != a[i + 1])
            {
                ans++;
                i++;
            }
            else
            {
                ans++;
            }
        }
    }
    printf("%d", ans);
    return 0;
}