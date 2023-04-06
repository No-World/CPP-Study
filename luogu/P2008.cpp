#include <iostream>
using namespace std;
int n;
int a[10010], f[10010], dp[10010];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        dp[i] = a[i];
        for (int j = 1; j < i; j++)
        {
            if (a[i] >= a[j] && f[i] < f[j] + 1)
            {
                f[i] = f[j] + 1;
                dp[i] = dp[j] + a[i];
            }
        }
        printf("%d ", dp[i]);
    }
    return 0;
}