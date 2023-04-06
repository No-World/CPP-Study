#include <cstdio>
#include <algorithm>
using namespace std;

int a[25];

int main()
{
    int i = 1, ans = 0;
    a[0] = 1;
    while (a[i - 1])
    {
        scanf("%d", &a[i]);
        i++;
    }
    a[0] = 0;
    i--;
    sort(a + 1, a + i + 1);
    for (int j = 1; j <= i; j++)
        for (int k = j + 1; k <= i; k++)
            if (a[k] == 2 * a[j])
            {
                ans++;
                break;
            }
    printf("%d", ans);

    return 0;
}