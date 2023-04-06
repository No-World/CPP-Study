#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    int ans = n;
    while (n >= 3)
    {
        n -= 2;
        ans++;
    }
    printf("%d\n", ans);
    return 0;
}