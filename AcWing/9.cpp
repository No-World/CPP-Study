#include <cstdio>
#include <iostream>
using namespace std;
const int N = 110;
int dp[N], v[N], w[N];
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    while (n--)
    {
        int s;
        scanf("%d", &s);
        for (int i = 0; i < s; i++)
        {
            scanf("%d%d", &v[i], &w[i]);
        }
        for (int i = m; i >= 0; i--)
        {
            for (int j = 0; j < s; j++)
            {
                if (v[j] <= i)
                {
                    dp[i] = max(dp[i], dp[i - v[j]] + w[j]);
                }
            }
        }
    }
    printf("%d\n", dp[m]);

    return 0;
}