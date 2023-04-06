#include <cstdio>
using namespace std;
int main()
{
    int a = 2022, sum = 0;
    while (a >= 26)
    {
        sum++;
        printf("%d ", a % 26);
        a /= 26;
    }
    printf("%d", a);
    return 0;
}