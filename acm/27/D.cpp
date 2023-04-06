#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int a[50010], N, M, b, c, d, MAX = 0;
    memset(a, 0, sizeof(a));
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d%d", &b, &c);
        MAX = max(c + 1, MAX);
        a[b]++;
        a[c + 1]--;
    }
    for (int i = 1; i <= MAX; i++)
    {
        a[i] += a[i - 1];
    }
    scanf("%d", &M);
    while (M--)
    {
        scanf("%d", &d);
        printf("%d\n", a[d]);
    }
    
    return 0;
}