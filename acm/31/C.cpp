#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int fa[40010], a[10010], b[10010], c[20010];
string s[10010];

int find(int x)
{
    if (x == fa[x])
    {
        return x;
    }
    return fa[x] = find(fa[x]);
}

void merge(int x, int y)
{
    x = find(x);
    y = find(y);
    if (x != y)
    {
        fa[x] = find(y);
    }
}

void intt(int n)
{
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }
}

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    intt(4 * m);
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i] >> b[i] >> s[i];
        --a[i];
        c[i] = a[i];
        c[i + m] = b[i];
    }
    sort(c + 1, c + 2 * m + 1);
    for (int i = 1; i <= m; i++)
    {
        a[i] = lower_bound(c + 1, c + 2 * m + 1, a[i]) - c;
        b[i] = lower_bound(c + 1, c + 2 * m + 1, b[i]) - c;
    }
    for (int i = 1; i <= m; i++)
    {
        if (s[i][0] == 'e')
        {
            if (find(a[i]) == find(b[i] + 2 * m))
            {
                break;
            }
            else
            {
                merge(a[i], b[i]);
                merge(a[i] + 2 * m, b[i] + 2 * m);
            }
        }
        else
        {
            if (find(a[i]) == find(b[i]))
            {
                break;
            }
            else
            {
                merge(a[i], b[i] + 2 * m);
                merge(a[i] + 2 * m, b[i]);
            }
        }
        ans = i;
    }
    printf("%d", ans);
    return 0;
}