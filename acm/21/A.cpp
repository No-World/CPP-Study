#include <cstdio>
#include <iostream>
using namespace std;
int fa[110], py[110];
int root(int a)
{
    if (fa[a] == a)
        return a;
    else
        return fa[a] = root(fa[a]);
}
void Fa(int a, int b)
{
    a = root(a);
    b = root(b);
    if (a != b)
    {
        fa[b] = a;
        py[a] += py[b];
        py[b] = 0;
    }
}
int main()
{
    int n, ans = 0;
    for (int i = 1; i <= 100; i++)
    {
        fa[i] = i;
        py[i] = 1;
    }
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int p, q;
        scanf("%d%d", &p, &q);
        Fa(p, q);
    }
    for (int i = 1; i <= 100; i++)
        ans = max(ans, py[i]);
    printf("%d", ans);
    return 0;
}