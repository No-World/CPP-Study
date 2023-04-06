#include <cstdio>
#include <iostream>
using namespace std;
int fa[101];
int find(int a)
{
    if (fa[a] == a)
        return a;
    return fa[a] = find(fa[a]);
}

void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        fa[b] = a;
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
    intt(100);
    int m, ans = 0, MAX = 0;
    scanf("%d", &m);
    while (m--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        merge(a, b);
    }
    for (int i = 1; i <= 100; i++)
    {
        find(i);
    }
    
    for (int i = 1; i <= 100; i++)
    {
        int ans = 0;
        for (int j = 1; j <= 100; j++)
        {
            if (i == fa[j])
            {
                ans++;
            }
        }
        MAX = max(ans, MAX);
    }
    printf("%d\n", MAX);
    return 0;
}