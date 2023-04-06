#include <cstdio>
#include <algorithm>
using namespace std;
int a[7000][5];
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d%d%d", &a[i][1], &a[i][2], &a[i][3]);
        sort(a[i] + 1, a[i] + 4);
    }
    
    for (int i = 1; i <= t; i++)
    {
        printf("%d\n", a[i][2]);
    }
    return 0;
}