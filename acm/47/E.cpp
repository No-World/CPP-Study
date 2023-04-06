#include <cstdio>
using namespace std;

int main()
{

    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = n; i >= 2; i--)
    {
        printf("%d %d\n", i, i - 1);
    }
    printf("%d %d\n", 1, n);
    return 0;
}