#include <cstdio>
using namespace std;
typedef long long ll;
ll a[100010];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i - 1] < a[i - 2])
        {
            break;
        }
        else if (a[i] < a[i - 1] && (a[i - 1] - 1 >= a[i - 2]))
        {
            a[i - 1]--;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] < a[i - 1])
        {
            printf("%d\n", i - 1);
            break;
        }
    }

    return 0;
}