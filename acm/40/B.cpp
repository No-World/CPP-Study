#include <iostream>
#include <cstdio>
using namespace std;
typedef long long ll;
const int mod = 1000003;
const int maxn = 5e5 + 10;
int n, m;
int mp1[maxn], mp2[maxn];
int main()
{
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        mp1[i] = 0, mp2[i] = 0;
    }
    int a = n, b = n;
    for (int i = 1; i <= m; i++)
    {
        int c, d;
        scanf("%d %d", &c, &d);
        mp1[c]++;
        mp2[d]++;
        if (mp1[c] >= n)
        {
            a--;
        }
        if (mp2[d] >= n)
        {
            b--;
        }
    }
    printf("%d\n", min(a, b));
    return 0;
}