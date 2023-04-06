#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 0;
    for (int i = 1950; i < 2022; i++)
    {
        if (i % 400 == 0 && (i % 4 == 0 && i % 100 != 0))
        {
            b++;
        }
        a += 365;
    }
    printf("%d", a + b + 30 * 3 + 2);
    
    return 0;
}