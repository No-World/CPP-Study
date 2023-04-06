#include <cstdio>
using namespace std;
int main()
{
    long long j = 0, o = 0, n, s, ans = 0;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%lld", &s);
        if (s % 2 != 0)
        {
            j++;
        }
        ans += s;
    }
    if (ans % 2 == 0 && j % 2 == 0)
    {
        printf("Bob");
    }
    else
    {
        printf("Alice");
    }
    return 0;
}