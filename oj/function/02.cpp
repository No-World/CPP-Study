#include <cstdio>
using namespace std;

int main()
{
    int n;
    double sum = 1, a = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a *= i;
        sum += 1 / a;
    }
    printf("%.10f", sum);
    return 0;
}