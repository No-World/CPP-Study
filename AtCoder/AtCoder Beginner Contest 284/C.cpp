#include <iostream>
using namespace std;
int fa[110];

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
        fa[x] = y;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        merge(x, y);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        find(i);
        if (i == fa[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}