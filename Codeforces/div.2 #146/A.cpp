#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, k;
        scanf("%lld%lld", &n, &k);
        if ((n % 2 != 0 && k % 2 != 0) || n % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
