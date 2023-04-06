#include <cstdio>
#include <algorithm>
using namespace std;

int a[610];

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (__gcd(a[j], a[i]) == 1)
                ans++;
    printf("%d", ans);

    return 0;
}