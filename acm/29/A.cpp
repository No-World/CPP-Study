#include <cstdio>
#include <algorithm>
using namespace std;
int n, q;
long long a[100010], b[100010];
int smaller(int x)
{
    int l = 1, r = n, ans = n + 1;
    while (l <= r)
    {
        int mid = l + r >> 1;
        if (a[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans - 1;
}
int bigger(int x)
{
    int l = 1, r = n, ans = n + 1;
    while (l <= r)
    {
        int mid = l + r >> 1;
        if (a[mid] > x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return  n - ans + 1;
}
int main()
{
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= q; i++)
    {
        scanf("%lld", &b[i]);
    }
    for (int i = 1; i <= q; i++)
    {
        printf("%d %d\n", smaller(b[i]), bigger(b[i]));
    }

    return 0;
}