#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n, ans = 0;
    double a;
    scanf("%d", &n);
    a = sqrt(n);
    for (int i = 1; i <= a; i++)
        if (n % i == 0)
            i == a? ans++ : ans += 2;
    printf("%d", ans);

    return 0;
}