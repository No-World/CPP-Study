#include <cstdio>
using namespace std;
char a[20];
int main()
{
    int x = 0, y;
    for (int i = 1000; i < 10000; i++)
    {
        y = i % 10 + (i % 100) / 10 * 16 + (i % 1000) / 100 * 16 * 16
        + (i / 1000) * 16 * 16 * 16;
        
        printf("%d %d\n", i, y);
        if (y % i == 0){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}