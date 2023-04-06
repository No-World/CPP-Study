#include <cstdio>
using namespace std;
int a[100010];
int main()
{
    int n, m;
    bool flag = false;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        a[i] += a[i - 1];
    }
    int r = 0, l = 0;
    while (r <= n)
    {
        if (a[l] - a[r] < m)
        {
            l++;
        }
        else if (a[l] - a[r] > m)
        {
            r++;
        }
        else
        {
            printf("%d %d\n", ++r, l);
            flag = true;
        }
    }
    if (!flag)
    {
        printf("-1\n");
    }
    return 0;
}