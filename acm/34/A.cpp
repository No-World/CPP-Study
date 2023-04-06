#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, r = 0, b = 0;
        scanf("%d", &n);
        char R[n + 1], B[n + 1];
        scanf("%s%s", R + 1, B + 1);
        for (int i = 1; i <= n; i++)
        {
            if (R[i] > B[i])
            {
                r++;
            }
            if (R[i] < B[i])
            {
                b++;
            }
        }
        if (r > b)
        {
            printf("RED\n");
        }
        else if (r < b)
        {
            printf("BLUE\n");
        }
        else
        {
            printf("EQUAL\n");
        }
    }
    
    return 0;
}