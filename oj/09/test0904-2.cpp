#include <cstdio>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);
    for (int m = 1;; m++)
    {
        int y = m * n + 1;
        int i = 1;
        for (; i < n; i++)
        {
            if (y % (n - 1) != 0)
                break;
            y = (y / (n - 1)) * n + 1;
        }
        if (i != n)
            continue;
        printf("%d", y);
        break;
    }
    
    return 0;
}