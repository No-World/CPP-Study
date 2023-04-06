#include <cstdio>
using namespace std;

int main()
{
    int b = 1;
    long long a;
    scanf("%lld", &a);
    while (a / 10 != 0)
    {
        b++;
        a = a / 10;
    }
    printf("%d", b);
    return 0;
}