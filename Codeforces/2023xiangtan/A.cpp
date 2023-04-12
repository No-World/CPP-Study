#include <cstdio>
// #include <iostream>
// #include <cstring>
#include <algorithm>
// #include <queue>
// #include <map>
// #include <vector>
using namespace std;
const int inf = 0x3f3f3f3f, N = 1010;
int a[100010];

inline void Solution()
{
    int n, w;
    scanf("%d%d", &n, &w);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; i--)
    {
        w -= a[i];
        if (w <= 0)
        {
            printf("%d\n", n - i);
            break;
        }
        if (i == 0)
        {
            printf("%d\n", n);
        }
    }
}

int main(int argc, char const *argv[])
{
    int t = 1;
    scanf("%d", &t);
    while (t--)
    {
        Solution();
    }
    return 0;
}