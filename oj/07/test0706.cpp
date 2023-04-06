#include <cstdio>
#include <cstring>
using namespace std;

char a[110];

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int ans = 0;
        scanf("%s", a + 1);
        int b = strlen(a + 1);
        for (int i = 1; i <= b; i++)
            ans += a[i] - '0';
        ans = ans % 3;
        if (ans)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}