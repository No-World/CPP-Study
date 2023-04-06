#include <cstdio>
#include <algorithm>
using namespace std;

int a[101];

int main()
{
    int b;
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + b + 1);
    printf("%d",a[b]);
    return 0;
}