#include <cstdio>
#include <iostream>
using namespace std;
int fa[2010];
int find(int a)
{
    if (fa[a] == a)
    {
        return a;
    }
    return fa[a] = find(fa[a]);
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    fa[b] = a;
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
    intt(2010);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        string c;
        cin >> a >> b >> c;
        if (c[0] == 'T')
        {
            if (find(a) == find(b + n))
            {
                cout << i << '\n';
            }
            else
            {
                merge(a, b);
                merge(a + n, b + n);
            }
        }
        else
        {
            if (find(a) == find(b))
            {
                cout << i << '\n';
            }
            else
            {
                merge(a, b + n);
                merge(a + n, b);
            }
        }
    }

    return 0;
}