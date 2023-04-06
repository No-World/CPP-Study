#include <cstdio>
#include <cstring>
using namespace std;

const int N = 15;
int n, sum, ans[N];
bool vis1[N], vis2[N * 2], vis3[N * 2];

void dfs(int m)
{
    if (m == n + 1)
    {
        sum++;
        if (sum <= 3)
        {
            for (int i = 1; i <= n; i++)
            {
                printf("%d ", ans[i]);
            }
            printf("\n");
        }
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis1[i] && !vis2[m + i] && !vis3[m - i + n])
        {
            vis1[i] = vis2[m + i] = vis3[m - i + n] = true;
            ans[m] = i;
            dfs(m + 1);
            vis1[i] = vis2[m + i] = vis3[m - i + n] = false;
        }
    }
}

int main()
{
    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        dfs(1);
        printf("%d\n", sum);
    }
    return 0;
}
