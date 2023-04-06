#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 1e5 + 10;

int fa[N], sl[N];

int find(int x)
{
    if (fa[x] != x)
    {
        fa[x] = find(fa[x]);
    }
    return fa[x];
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        fa[a] = b;
    }
}

int main()
{
    int n, m, x;
    cin >> n >> m >> x;

    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }

    int first;
    scanf("%d", &first);
    for (int i = 2; i <= m; i++)
    {
        int k;
        scanf("%d", &k);
        merge(first, k);
    }
    for (int i = 1; i <= x; i++)
    {
        int k;
        scanf("%d", &k);
        int first_k;
        scanf("%d", &first_k);
        sl[first_k]++;
        for (int j = 2; j <= k; j++)
        {
            int p;
            scanf("%d", &p);
            merge(first_k, p);
            sl[p]++;
        }
    }

    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (find(first) == find(i))
        {
            ans1 += sl[i];
            ans2++;
        }
    }

    printf("%d %d\n", ans1, ans2);

    return 0;
}