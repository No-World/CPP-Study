#include <cstdio>
using namespace std;
int main()
{
    int a, b, c, x, y, z;
    bool ans = false;
    scanf("%d%d%d", &x, &y, &z);
    if ((x == y && y >= z) || (x == z && z > y) || (y == z && z > x))
    {
        printf("YES");
        ans = true;
    }
    if (ans)
    {
    }
    else
    {
        printf("NO");
    }
    return 0;
}