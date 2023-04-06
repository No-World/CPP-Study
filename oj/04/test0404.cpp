#include <algorithm>
#include <cstdio>
using namespace std;
long long a[5001];

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n + 1); 
    printf("%d", a[1] - a[n]);

    return 0;
}