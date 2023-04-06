#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef pair<int, int> PII;
typedef pair<int, pair<int, int>> PIII;

const int MOD = 1e9 + 7;

const int N = 3e5 + 10;
int n, m, k, res, _;

struct node
{
    int l, r;
    int lx, rx;
    bool ok;
} tr[N << 2];

inline void pushup(int u)
{
    tr[u].lx = tr[u << 1].lx;
    tr[u].rx = tr[u << 1 | 1].rx;
    if (tr[u << 1].ok && tr[u << 1 | 1].ok && tr[u << 1].rx <= tr[u << 1 | 1].lx)
    {
        tr[u].ok = true;
    }
    else
    {
        tr[u].ok = false;
    }
}

inline void build_tree(int u, int l, int r)
{
    tr[u] = {l, r};
    tr[u].ok = false;
    if (l == r)
    {
        scanf("%d", &tr[u].lx);
        tr[u].rx = tr[u].lx;
        tr[u].ok = true;
        return;
    }

    int mid = l + r >> 1;
    build_tree(u << 1, l, mid);
    build_tree(u << 1 | 1, mid + 1, r);

    pushup(u);
}

inline void modify(int u, int x, int v)
{
    if (tr[u].l == tr[u].r)
    {
        tr[u].rx = tr[u].lx = v;
        return;
    }

    int mid = tr[u].l + tr[u].r >> 1;
    if (x <= mid)
    {
        modify(u << 1, x, v);
    }
    else
    {
        modify(u << 1 | 1, x, v);
    }

    pushup(u);
}

inline PIII query(int u, int l, int r)
{
    if (tr[u].l >= l && tr[u].r <= r)
    {
        return {tr[u].ok, {tr[u].lx, tr[u].rx}};
    }

    int mid = tr[u].l + tr[u].r >> 1;

    if (r <= mid)
    {
        return query(u << 1, l, r);
    }
    if (l > mid)
    {
        return query(u << 1 | 1, l, r);
    }

    PIII tmp1 = query(u << 1, l, r);
    PIII tmp2 = query(u << 1 | 1, l, r);
    if (!tmp1.first || !tmp2.first)
    {
        return {0, {0, 0}};
    }
    if (tmp1.second.second <= tmp2.second.first)
    {
        return {1, {tmp1.second.first, tmp2.second.second}};
    }
    return {0, {0, 0}};
}

int main()
{
    scanf("%d%d", &n, &m);

    build_tree(1, 1, n);

    while (m--)
    {
        int op, x, v;
        scanf("%d%d%d", &op, &x, &v);
        if (op == 1)
        {
            modify(1, x, v);
        }
        else
        {
            if (x > v)
            {
                swap(x, v);
            }
            PIII ok = query(1, x, v);
            if (!ok.first)
            {
                puts("No");
            }
            else
            {
                puts("Yes");
            }
        }
    }

    return 0;
}