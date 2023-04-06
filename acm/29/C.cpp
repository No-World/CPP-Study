#include <cstdio>
using namespace std;
int dis[50005];
int L, m, n, mid, ans;
bool check(int x)
{
    int cnt = 0;
    for (int i = 0, next = 1; i < n + 1 && next <= n + 1;)
    {
        if (dis[next] - dis[i] < x)
        {
            cnt++;
            next++;
        }
        else
        {
            i = next;
            next++;
        }
    }
    return cnt <= m;
}
int main()
{
    scanf("%d%d%d", &L, &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &dis[i]);
    }
    dis[n + 1] = L;
    int l = 0, r = L;
    ans = r;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (check(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }
    printf("%d", ans);
    return 0;
}