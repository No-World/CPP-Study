#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, m;
        scanf("%d%d", &n, &m);
        printf("%lld\n", n * (m + 1) / 2);
    }

    return 0;
}
