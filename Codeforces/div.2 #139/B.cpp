#include <cstdio>
using namespace std;
char a[200010];
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        bool flag = false;
        scanf("%d%s", &n, a + 1);
        for (int i = 1; i <= n - 2; i++)
        {
            for (int j = i + 2; j <= n; j++)
            {
                if (a[i] == a[j] && a[i + 1] == a[j + 1])
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}