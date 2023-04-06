#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int f[10010];
int c[4] = {0, 150, 200, 350};
int main()
{
    int T;
    scanf("%d", &T);
    int n;
    while (T--)
    {
        scanf("%d", &n);
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= 3; i++)
            for (int j = c[i]; j <= n; j++)
                f[j] = max(f[j], f[j - c[i]] + c[i]);
        printf("%d\n", n - f[n]);
    }
    return 0;
}
