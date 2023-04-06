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
    for(int i = n; i > 1; i--)
    printf("%d\n",a[i]);
    printf("%d",a[1]); 
    return 0;
}
