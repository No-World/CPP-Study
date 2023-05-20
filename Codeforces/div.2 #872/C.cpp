#include <bits/stdc++.h>
using namespace std;
inline void Solution()
{
    int n, m;
    scanf("%d%d", &n, &m);
    set<int> hash;
    int tl = 0, tr = 0;
    for (int i = 1, x; i <= n; i++)
    {
        scanf("%d", &x);
        if (x == -1)
        {
            tl++;
        }
        else if (x == -2)
        {
            tr++;
        }
        else
        {
            hash.insert(x);
        }
    }
    int i = 0, cnt = hash.size();
    int ans = min(m, cnt + max(tl, tr));
    for (auto x : hash)
    {
        i++;
        ans = max(ans, cnt + min(tl, x - i) + min(tr, m - x - (cnt - i)));
    }
    printf("%d\n", ans);
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        Solution();
    }
}