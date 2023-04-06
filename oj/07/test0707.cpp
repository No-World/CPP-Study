#include <cstdio>
#include <cstring>
using namespace std;

char a[1010];

int main()
{
    int ans = 0;
    scanf("%[^\n]", a + 1);
    int b = strlen(a + 1);
    for (int i = 1; i <= b + 1; i++)
    {
        if (a[i] == ' ')
        {
            if (ans)
            {
                printf("%d,", ans);
                ans = 0;
            }
        }
        else if (!a[i])
            printf("%d", ans);
        else
            ans++;
    }

    return 0;
}
