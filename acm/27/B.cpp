#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int a[10010], L, M, x, y;
    memset(a, 0, sizeof(a));
    scanf("%d%d", &L, &M);
    while (M--)
    {
        scanf("%d %d", &x, &y);
        for (int i = x; i <= y; i++)
        {
            a[i] = 1;
        }
    }
    for (int i = 1; i <= L; i++)
    {
        a[i] += a[i - 1];
    }
    
    printf("%d", L - a[L] + 1);
    
    return 0;
}