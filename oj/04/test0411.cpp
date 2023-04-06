#include <cstdio>
using namespace std;
int b[6];

int main()
{
    int a, c = 0;
    scanf("%d", &a);
    for (int i = 1; i < 6; i++)
    {
        scanf("%d", &b[i]);
        if (b[i] < a)
        {
            c += b[i];
        }
    }
    printf("%d",c);
    return 0;
}