#include <cstdio>
using namespace std;
int b[110] = {1};
int main()
{
    int n, m, sum;
    scanf("%d%d", &n, &m);
    for (int i = 1; i < 101; i++)
    {
        b[i] = b[i - 1] * n;
        if (b[i] >= m)
        {
            sum = i;
            break;
        }
    }
    int ans = 0;
    for (int i = sum; i >= 0; i--)
    {
        if (m >= b[i])
        {
            m -= b[i];
        }
    }
    if (m)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}