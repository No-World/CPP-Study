#include <cstdio>
using namespace std;
int a[100010][100010];
long long y[100010];
int main()
{
    long long n, m, b;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%lld%lld", &b, y[i]);
        a[b][y[i]]++;
    }
    
    return 0;
}