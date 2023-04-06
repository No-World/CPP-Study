#include <cstdio>
#include <iostream>
using namespace std;

int MAX = 0, MIN = 0x3f3f3f3f;
double sum;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int m;
        scanf("%d", &m);
        MAX = max(MAX, m);
        MIN = min(MIN, m);
        sum += m;
    }
    printf("%d\n%d\n%.2lf\n", MAX, MIN, sum / n);

    return 0;
}