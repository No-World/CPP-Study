#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    float x, sum = 0;
    int n;
    scanf("%f %d", &x, &n);
    for (int i = 0; i <= n; i++)
    {
        sum += pow(x, i);
    }
    printf("%.2f", sum);
    return 0;
}