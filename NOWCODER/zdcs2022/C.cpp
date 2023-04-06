#include <cstdio>
using namespace std;
long long a[500010],b[500010];
int main()
{
    int n, ans;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        b[i] = a[i] + 9;
    }
    ans = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] == b [j] && b[j])
            {
                b[j] = 0;
                ans--;
            }
        }
    }
    printf("%d", ans);
    return 0;
}