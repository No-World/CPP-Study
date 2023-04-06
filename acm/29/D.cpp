#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;
const double PI = acos(-1.0);
int num[1001000];
int n, m;
bool check(int x)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += num[i] / x;
    }
    if (res < m)
    {
        return false;
    }
    return true;
}
int main()
{
    scanf("%d%d", &n, &m);
    int max_s = 0;
    for (int i = 1; i <= n; i++)
    {
        int r;
        scanf("%d", &r);
        num[i] = PI * r * r;
        max_s = max(max_s, num[i]);
    }
    m++;
    int l = 0, r = max_s, ans;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    printf("%d", ans);

    return 0;
}