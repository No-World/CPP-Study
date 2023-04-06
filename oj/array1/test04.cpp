#include <cstdio>
using namespace std;

bool a[1010];

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 2; i <= k; i++)
    {
        for (int p = 2; p <= n; p++)
        {
            if (p % i == 0) //操作开关
                a[p] = !a[p];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (!a[i]) //判断输出
            printf("%d ", i);
    }
    return 0;
}
