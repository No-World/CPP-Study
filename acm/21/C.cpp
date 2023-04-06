#include <cstdio>
#include <vector>
using namespace std;

struct wp
{
    int w, v;
} a[1000];

vector<wp> vec[1000];

int fa[1010];

int root(int a)
{
    if (fa[a] == a)
        return a;
    return fa[a] = root(fa[a]);
}

void Fa(int a, int b)
{
    a = root(a);
    b = root(b);
    if (a != b)
        fa[b] = a;
}

void intt()
{
    for (int i = 0; i < 1002; i++)
        fa[i] = i;
}

int dp[1001];

int main()
{
    intt();
    int n, wm, k;
    scanf("%d%d%d", &n, &wm, &k);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &a[i].v, &a[i].w);
    
    for (int i = 0; i < k; i++)
    {
        int p, q;
        scanf("%d%d", &p, &q);
        Fa(p - 1, q - 1);
    }

    for (int i = 0; i < n; i++)
        vec[root(i)].push_back(a[i]);
    for (int i = 0; i < n; i++)
        if (!vec[i].empty())
            for (int j = wm; j >= 0; j--)
                for (int k = 0; k < vec[i].size(); k++)
                    if (j - vec[i][k].w >= 0)
                        dp[j] = max(dp[j], dp[j - vec[i][k].w] + vec[i][k].v);
    printf("%d", dp[wm]);
    return 0;
}