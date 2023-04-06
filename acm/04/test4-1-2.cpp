#include <algorithm>
#include <cstdio>
using namespace std;
long long a[5001];

bool cmp(int x,int y) 
{
    return x > y; 
} 

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    sort(a + 1, a + n + 1, cmp); 
    for(int i = 1; i <= n; i++)
    printf("%d\n",a[i]);
    return 0;
}
