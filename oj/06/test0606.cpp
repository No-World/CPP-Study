#include <cstdio>
#include <algorithm>
using namespace std;

int n[20];

int main()
{
    int i = 10, h;
    while (i--)
        scanf("%d", &n[i]);
    sort(n, n + 10);
    scanf("%d", &h);
    while (h + 30 >= n[i])
        i++;
    printf("%d", i);

    return 0;
}