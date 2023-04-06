#include <cstdio>
using namespace std;
long double b[] = {134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1, 0};
int main()
{
    long double y;
    int sum = 0;
    scanf("%llf", &y);
    for (int i = 0; i < 28; i++)
    {
        if (b[i] <= y)
        {
            y -= b[i];
            sum++;
        }
    }

    printf("%d\n", sum);

    return 0;
}