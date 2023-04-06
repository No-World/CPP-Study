#include <cstdio>
#include <iostream>
using namespace std;
const int N = 110;
int dp[N];
int main(int argc, char const *argv[])
{
    int n, z;
    scanf("%d%d", &n, &z);
    while (n--)
    {
        int v, w, s;
        scanf("%d%d%d", &v, &w, &s);
        for (int j = 0; j < s; j++)
        {
            for (int k = z; k >= v; k--)
            {
                dp[k] = max(dp[k], dp[k - v] + w);
            }
        }
    }
    printf("%d\n", dp[z]);

    return 0;
}