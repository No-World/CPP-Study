#include <cstdio>
using namespace std;

int main()
{
    int x, y, n, ans = 0;
    scanf("%d%d", &y, &x);
    for (int i = 1; i <= y; i++)
        for (int j = 1; j <= x; j++)
        {
            scanf("%d", &n);
            if (i == 1 || i == y)
                ans += n;
            else if (j == 1 || j == x)
                ans += n;
        }
    printf("%d", ans);
    return 0;
}