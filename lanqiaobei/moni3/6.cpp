#include <cstdio>
using namespace std;
int main()
{
    int w, d;
    scanf("%d\n%d", &w, &d);
    w = (w + d) % 7;
    if (!w)
    {
        w = 7;
    }
    printf("%d", w);
    return 0;
}