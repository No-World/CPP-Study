#include <cstdio>
#include <algorithm>
using namespace std;

struct afs
{
    int id;
    int fs;
} a[5010];

bool cmp(afs x, afs y)
{
    if (x.fs != y.fs)
        return x.fs > y.fs;//按分数从大到小排序
    else
        return x.id < y.id;//分数相同则按报名号从小到大排序
}

int main()
{
    int n, m, fsx, ans = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &a[i].id, &a[i].fs);
    }
    sort(a + 1, a + n + 1, cmp);
    m = m * 1.5;
    fsx = a[m].fs;
    for (int i = 1; a[i].fs >= fsx; i++)
    {
        ans++;
        // printf("%d\n", i);
    }
    printf("%d %d\n", fsx, ans);
    for (int i = 1; i <= ans; i++)
    {
        printf("%d %d\n", a[i].id, a[i].fs);
    }
    
    return 0;
}