#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    float a = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        a += 1.0 / i * pow(-1, i - 1);
    printf("%.4f", a);

    return 0;
}