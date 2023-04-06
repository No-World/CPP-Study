#include <cstdio>
#include <iostream>
using namespace std;
const int N = 1010;
int dp[N];
int main()
{
    int n, z;
    scanf("%d%d", &n, &z);
    while (n--)
    {
        int v, w;
        scanf("%d%d", &v, &w);
        for (int i = v; i <= z; i++)
        {
            dp[i] = max(dp[i], dp[i - v] + w);
        }
    }
    printf("%d", dp[z]);

    return 0;
}