#include <cstdio>
using namespace std;

int y[100001];
int ans;

int main()
{
    int m, n, k, l, a, b, x;
    scanf("%d %d %d", &n, &m, &k);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d %d %d", &a, &b, &x);
        y[a] += x;
        y[b + 1] -= x;
    }
    for (int i = 1; i <= n; i++)
    {
        y[i] += y[i - 1];
        if (y[i] > k)
            ans++;
    }
    printf("%d",ans);

    return 0;
}